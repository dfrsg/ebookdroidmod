package org.ebookdroid2.event;

import org.ebookdroid2.core.AbstractViewController;
import org.ebookdroid2.core.IViewController.InvalidateSizeReason;
import org.ebookdroid2.model.ViewState;
import org.ebookdroid2.page.PageTreeNode;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.util.Log;

import java.util.concurrent.ConcurrentLinkedQueue;

public class EventPool {
	private final static boolean D = false;
	private final static String TAG = "EventPool";
	
    private static final ConcurrentLinkedQueue<EventDraw> drawEvents = new ConcurrentLinkedQueue<EventDraw>();
    private static final ConcurrentLinkedQueue<EventReset> resetEvents = new ConcurrentLinkedQueue<EventReset>();
    private static final ConcurrentLinkedQueue<EventScrollUp> scrollUpEvents = new ConcurrentLinkedQueue<EventScrollUp>();
    private static final ConcurrentLinkedQueue<EventScrollDown> scrollDownEvents = new ConcurrentLinkedQueue<EventScrollDown>();
    private static final ConcurrentLinkedQueue<EventScrollTo> scrollToEvents = new ConcurrentLinkedQueue<EventScrollTo>();
    private static final ConcurrentLinkedQueue<EventChildLoaded> childLoadedEvents = new ConcurrentLinkedQueue<EventChildLoaded>();
    private static final ConcurrentLinkedQueue<EventZoomIn> zoomInEvents = new ConcurrentLinkedQueue<EventZoomIn>();
    private static final ConcurrentLinkedQueue<EventZoomOut> zoomOutEvents = new ConcurrentLinkedQueue<EventZoomOut>();

    public static EventDraw newEventDraw(final ViewState viewState, final Canvas canvas, Context context) {
    	if (D) {
        	Log.e(TAG, ">>>EventPool#newEventDraw()");
        }
        EventDraw event = drawEvents.poll();
        if (event == null) {
            event = new EventDraw(drawEvents);
        }
        event.init(viewState, canvas);
        return event;
    }

    public static EventDraw newEventDraw(final EventDraw parentEvent, final Canvas canvas, Context context) {
        if (D) {
        	Log.e(TAG, ">>>EventPool#newEventDraw()");
        }
        EventDraw event = drawEvents.poll();
        if (event == null) {
            event = new EventDraw(drawEvents);
        }
        event.init(parentEvent, canvas);
        return event;
    }

    public static EventReset newEventReset(final AbstractViewController ctrl, final InvalidateSizeReason reason,
            final boolean clearPages, Context context) {
        if (D) {
        	Log.e(TAG, ">>>EventPool#newEventReset()");
        }
        EventReset event = resetEvents.poll();
        if (event == null) {
            event = new EventReset(resetEvents);
        }
        event.init(ctrl, reason, clearPages);
        return event;
    }

    public static AbstractEventScroll<?> newEventScroll(final AbstractViewController ctrl, final int delta, Context context) {
        if (D) {
        	Log.e(TAG, ">>>EventPool#newEventScroll()");
        }
        AbstractEventScroll<?> event = null;
        if (delta > 0) {
            event = scrollDownEvents.poll();
            if (event == null) {
                event = new EventScrollDown(scrollDownEvents);
            }
        } else {
            event = scrollUpEvents.poll();
            if (event == null) {
                event = new EventScrollUp(scrollUpEvents);
            }
        }
        event.init(ctrl);
        return event;
    }

    public static EventScrollTo newEventScrollTo(final AbstractViewController ctrl, final int viewIndex, Context context) {
    	if (D) {
        	Log.e(TAG, ">>>EventPool#newEventScrollTo()");
        }
        EventScrollTo event = scrollToEvents.poll();
        if (event == null) {
            event = new EventScrollTo(scrollToEvents);
        }
        event.init(ctrl, viewIndex);
        return event;
    }

    public static EventChildLoaded newEventChildLoaded(final AbstractViewController ctrl, final PageTreeNode child,
            final Rect bitmapBounds, Context context) {
    	if (D) {
        	Log.e(TAG, ">>>EventPool#newEventChildLoaded()");
        }
        EventChildLoaded event = childLoadedEvents.poll();
        if (event == null) {
            event = new EventChildLoaded(childLoadedEvents);
        }
        event.init(ctrl, child, bitmapBounds);
        return event;
    }

    public static AbstractEventZoom<?> newEventZoom(final AbstractViewController ctrl, final float oldZoom,
            final float newZoom, final boolean committed, Context context) {
    	if (D) {
        	Log.e(TAG, ">>>EventPool#newEventZoom()");
        }
        AbstractEventZoom<?> event = null;
        if (newZoom > oldZoom) {
            event = zoomInEvents.poll();
            if (event == null) {
                event = new EventZoomIn(zoomInEvents);
            }
        } else {
            event = zoomOutEvents.poll();
            if (event == null) {
                event = new EventZoomOut(zoomOutEvents);
            }
        }
        event.init(ctrl, oldZoom, newZoom, committed);
        return event;
    }
}
