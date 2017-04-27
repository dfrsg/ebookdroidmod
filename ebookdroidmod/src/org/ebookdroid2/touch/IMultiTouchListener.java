package org.ebookdroid2.touch;

import android.view.MotionEvent;

public interface IMultiTouchListener {
    void onTwoFingerPinchEnd(MotionEvent e);
    void onTwoFingerPinch(MotionEvent e, float oldDistance, 
    	float newDistance);
    void onTwoFingerTap(MotionEvent e);
}
