#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_font_NotoSansPhoenician_Regular_ttf_size = 5684;
asm(".section .rodata");
asm(".global fz_font_NotoSansPhoenician_Regular_ttf");
asm(".type fz_font_NotoSansPhoenician_Regular_ttf STT_OBJECT");
asm(".size fz_font_NotoSansPhoenician_Regular_ttf, 5684");
asm(".balign 64");
asm("fz_font_NotoSansPhoenician_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansPhoenician-Regular.ttf\"");
#else
const int fz_font_NotoSansPhoenician_Regular_ttf_size = 5684;
const char fz_font_NotoSansPhoenician_Regular_ttf[] = {
0,1,0,0,0,11,0,128,0,3,0,48,79,83,47,50,122,231,113,87,0,0,1,56,0,0,0,96,
99,109,97,112,0,221,36,113,0,0,2,28,0,0,0,184,103,97,115,112,0,7,0,7,0,0,
22,40,0,0,0,12,103,108,121,102,105,226,207,155,0,0,3,24,0,0,11,190,104,101,
97,100,4,16,9,204,0,0,0,188,0,0,0,54,104,104,101,97,14,217,4,90,0,0,0,244,
0,0,0,36,104,109,116,120,158,34,13,16,0,0,1,152,0,0,0,132,108,111,99,97,45,
254,49,44,0,0,2,212,0,0,0,68,109,97,120,112,0,37,0,49,0,0,1,24,0,0,0,32,110,
97,109,101,143,174,187,24,0,0,14,216,0,0,6,24,112,111,115,116,72,8,253,204,
0,0,20,240,0,0,1,54,0,1,0,0,0,1,10,61,5,13,6,231,95,15,60,245,0,11,8,0,0,
0,0,0,204,125,233,143,0,0,0,0,210,40,203,254,0,30,255,29,6,44,5,231,0,0,0,
9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,6,144,0,30,0,0,6,44,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,33,0,1,0,0,0,33,0,48,0,3,0,0,0,0,0,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,4,4,241,1,144,0,5,0,0,5,154,5,51,0,0,1,31,5,154,5,51,
0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,6,0,0,0,0,0,0,0,0,0,
0,0,71,79,79,71,0,64,0,0,255,255,8,141,253,168,0,0,8,141,2,88,0,0,0,1,0,0,
0,0,4,0,5,154,0,0,0,32,0,0,4,0,0,102,0,0,0,0,4,20,0,0,2,20,0,0,6,144,0,80,
4,252,0,80,4,161,0,30,5,64,0,100,5,165,0,100,4,252,0,35,5,49,0,140,5,37,0,
150,6,100,0,150,4,221,0,120,4,180,0,100,4,57,0,80,6,25,0,60,4,55,0,80,5,4,
0,140,5,212,0,160,4,102,0,100,6,25,0,80,5,100,0,120,4,221,0,100,6,2,0,60,
5,231,0,200,3,54,0,220,5,104,0,92,4,60,0,85,5,175,0,40,4,208,0,220,6,66,0,
220,1,252,0,100,0,0,0,2,0,3,0,1,0,0,0,20,0,3,0,10,0,0,0,84,0,4,0,64,0,0,0,
12,0,8,0,2,0,4,0,0,0,13,0,32,0,160,254,255,255,255,0,0,0,0,0,13,0,32,0,160,
254,255,255,255,0,1,255,245,255,227,255,99,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,12,0,0,0,0,0,100,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,13,0,0,
0,13,0,0,0,2,0,0,0,32,0,0,0,32,0,0,0,3,0,0,0,160,0,0,0,160,0,0,0,3,0,0,254,
255,0,0,254,255,0,0,0,1,0,1,9,0,0,1,9,27,0,0,0,4,0,1,9,31,0,1,9,31,0,0,0,
32,0,0,0,20,0,20,0,20,0,20,0,89,0,155,0,193,0,247,1,51,1,98,1,148,1,208,2,
36,2,90,2,134,2,174,2,240,3,29,3,99,3,147,3,181,3,235,4,46,4,99,4,165,4,207,
4,228,5,3,5,69,5,114,5,150,5,200,5,223,0,2,0,102,0,0,3,154,5,182,0,3,0,7,
0,0,51,17,33,17,37,33,17,33,102,3,52,253,47,2,110,253,146,5,182,250,74,98,
4,242,0,2,0,80,255,231,6,44,5,204,0,31,0,38,0,0,1,22,23,54,55,23,6,7,22,23,
36,37,23,4,5,22,23,7,38,39,4,35,34,38,53,52,54,55,54,55,38,39,3,54,37,38,
39,6,7,2,133,90,57,232,202,74,228,224,68,55,1,38,1,36,23,254,220,254,238,
47,39,176,44,57,254,160,208,95,88,63,85,235,171,59,93,208,248,1,2,38,54,213,
205,5,204,203,151,151,118,149,129,142,187,196,12,18,162,16,10,186,223,54,
239,218,11,63,63,52,92,59,163,113,159,221,252,194,4,8,129,158,140,150,0,2,
0,80,255,234,4,52,5,192,0,28,0,37,0,0,1,52,39,4,33,34,53,52,55,54,54,55,55,
54,51,50,22,23,22,18,18,21,20,0,5,39,54,36,54,3,38,39,6,6,7,23,23,50,3,113,
28,254,213,254,127,89,71,106,209,106,36,56,68,46,61,18,31,105,83,254,154,
254,184,77,126,1,58,128,65,51,63,87,214,90,4,50,171,2,46,74,124,24,92,61,
76,116,220,92,32,51,40,46,77,254,162,254,178,83,134,254,215,133,149,44,178,
143,1,164,183,186,62,209,108,9,1,0,0,1,0,30,0,0,3,217,5,194,0,18,0,0,19,18,
37,54,51,50,22,23,22,18,19,7,38,2,2,39,6,6,7,30,240,1,55,50,51,41,38,11,68,
137,8,192,5,39,86,44,165,214,91,3,170,1,38,207,35,41,27,164,252,219,254,117,
42,210,1,137,2,6,124,121,200,107,0,2,0,100,0,219,4,220,5,192,0,19,0,30,0,
0,37,38,39,6,4,35,32,53,52,62,3,51,50,22,26,2,23,1,38,2,39,6,2,7,23,22,51,
50,4,48,53,94,110,254,184,118,254,243,64,121,158,113,65,51,109,149,152,128,
34,254,131,64,142,58,104,170,15,4,32,69,158,219,184,235,27,38,89,66,184,226,
232,102,133,254,235,254,171,254,179,117,2,3,147,1,17,75,133,254,200,83,9,
8,0,1,0,100,255,231,5,45,5,192,0,31,0,0,19,62,2,55,54,51,50,22,23,18,18,19,
7,38,39,6,5,39,36,37,38,39,6,5,39,36,37,38,39,4,5,100,92,120,98,208,73,67,
47,48,14,136,209,113,163,58,67,231,254,205,78,1,52,1,1,39,45,242,254,199,
78,1,36,1,27,61,49,254,245,254,232,4,23,71,88,71,144,51,40,28,254,229,253,
149,254,41,56,250,233,187,172,142,168,217,128,127,175,181,142,167,205,154,
86,160,208,0,0,1,0,35,255,240,4,72,5,206,0,27,0,0,1,6,6,21,20,18,23,7,38,
2,17,53,55,6,35,34,38,53,52,55,23,6,21,20,22,51,32,19,3,239,89,65,133,110,
135,133,169,2,130,151,157,188,65,172,42,85,74,1,43,160,5,109,157,213,114,
234,254,90,125,140,131,1,254,1,13,43,48,63,178,141,114,118,76,65,86,78,84,
1,146,0,0,1,0,140,255,234,4,165,5,214,0,27,0,0,1,50,21,20,3,2,21,16,23,37,
23,5,6,6,35,34,38,39,38,2,53,52,18,55,5,55,37,54,2,203,54,22,22,15,1,164,
29,254,191,46,146,19,33,49,16,13,14,25,13,254,82,7,1,177,92,5,214,76,51,254,
250,254,249,177,254,105,93,105,156,92,14,30,32,43,37,1,189,123,104,1,188,
91,115,165,124,23,0,3,0,150,255,246,4,153,5,146,0,18,0,24,0,29,0,0,37,34,
38,53,16,3,3,55,23,37,55,50,23,18,19,7,17,5,6,1,38,39,5,22,23,1,3,5,22,23,
1,32,31,30,52,25,186,19,2,160,28,48,6,63,5,192,253,119,25,2,136,10,16,253,
205,11,14,2,76,13,253,202,4,6,77,37,44,1,131,2,58,1,31,24,201,169,4,53,253,
250,252,217,30,1,4,166,7,3,46,149,163,144,112,200,254,183,1,51,144,80,228,
0,0,3,0,150,255,236,5,226,5,205,0,12,0,24,0,47,0,0,1,16,0,33,32,0,17,16,0,
33,50,4,18,7,16,0,35,34,2,21,16,0,51,50,18,5,52,39,6,35,35,39,35,39,23,50,
55,3,55,22,23,54,55,23,6,7,22,21,5,226,254,186,254,208,254,169,254,129,1,
73,1,42,229,1,73,171,194,254,238,251,221,221,1,14,251,220,226,253,197,7,82,
126,17,46,17,10,73,113,104,23,179,22,6,154,132,18,137,158,7,2,139,254,190,
254,163,1,185,1,136,1,63,1,97,202,254,135,252,1,65,1,92,254,253,252,254,191,
254,163,1,4,46,123,168,5,1,161,1,6,1,41,25,216,90,18,28,159,31,19,168,121,
0,1,0,120,0,203,4,101,5,211,0,30,0,0,1,6,6,7,6,35,34,39,54,19,6,7,55,54,55,
54,55,5,55,37,54,51,50,21,20,7,2,3,54,54,55,4,101,135,251,211,42,31,83,18,
20,117,158,204,20,211,191,70,67,253,200,13,2,102,38,27,98,20,225,98,131,229,
160,1,94,14,56,65,12,81,133,1,92,28,64,160,74,30,197,163,122,181,126,9,101,
24,60,253,219,254,155,40,49,23,0,1,0,100,255,232,4,140,5,202,0,19,0,0,1,0,
3,39,54,19,4,5,39,36,37,38,0,39,55,22,4,23,54,55,4,140,254,199,152,175,45,
125,255,0,254,231,57,1,93,1,52,144,254,181,134,110,146,1,49,113,79,88,5,145,
252,215,253,128,59,243,1,129,89,128,151,157,103,144,1,15,85,125,92,240,112,
225,219,0,0,1,0,80,255,241,3,193,5,126,0,19,0,0,37,6,4,35,34,38,53,52,54,
55,54,0,19,23,6,0,2,7,36,37,3,193,178,254,110,155,63,83,29,17,37,1,53,181,
165,62,254,206,154,15,1,56,1,77,108,57,66,53,45,31,93,54,121,2,173,1,83,77,
107,253,130,254,152,66,17,99,0,1,0,60,255,144,5,141,5,208,0,39,0,0,19,19,
55,54,54,51,50,23,23,37,54,54,51,50,22,21,20,2,0,7,39,54,0,18,55,14,3,35,
34,38,39,39,7,6,35,34,39,3,218,176,170,29,38,20,43,42,154,1,24,33,49,40,56,
73,217,254,97,225,113,173,1,96,239,19,185,55,53,45,26,41,50,41,102,161,57,
54,70,45,189,5,208,254,165,201,34,19,57,197,255,29,24,82,68,186,254,24,253,
223,192,126,155,1,199,1,189,144,177,42,27,12,32,51,123,171,59,89,1,122,0,
1,0,80,255,219,3,171,5,197,0,23,0,0,1,54,54,51,50,22,21,16,0,3,39,54,18,18,
55,7,6,6,35,34,38,39,3,55,1,154,172,168,63,51,75,254,203,211,149,105,208,
129,21,246,31,71,26,35,54,13,177,159,4,43,141,140,65,44,254,252,253,21,254,
243,105,137,1,127,1,112,157,200,25,24,45,38,1,194,80,0,0,1,0,140,255,245,
4,120,5,197,0,39,0,0,1,38,39,6,7,55,36,37,7,34,7,22,23,54,55,7,6,7,23,54,
55,7,34,7,18,19,39,2,3,6,7,55,54,55,38,39,6,7,55,54,2,12,25,15,235,109,16,
1,250,1,142,16,169,194,19,20,178,186,12,157,170,25,167,207,16,164,178,25,
5,193,2,27,162,206,16,210,125,14,13,133,244,12,123,4,65,133,60,26,23,166,
71,7,164,14,71,118,16,8,164,4,16,206,13,4,164,14,254,230,254,200,19,1,17,
1,29,17,28,166,28,12,125,77,16,38,166,21,0,2,0,160,1,216,5,52,5,205,0,14,
0,28,0,0,1,50,22,22,21,20,6,4,35,34,0,53,52,54,36,23,34,6,6,21,20,22,51,50,
54,53,52,38,38,3,12,157,246,149,158,254,235,188,255,254,218,156,1,27,175,
128,191,101,194,175,195,220,93,167,5,205,121,238,139,153,241,121,1,15,232,
144,235,131,162,87,156,97,164,185,188,166,86,156,93,0,0,1,0,100,255,231,3,
208,5,204,0,17,0,0,19,18,33,50,22,21,20,2,3,39,18,18,53,52,38,35,34,7,100,
103,1,129,186,202,192,156,176,157,173,115,100,221,64,4,103,1,101,201,182,
207,253,154,254,207,54,1,72,2,47,199,95,112,229,0,0,1,0,80,255,248,5,181,
5,231,0,29,0,0,1,22,23,54,54,51,50,23,23,22,51,50,54,55,23,6,6,35,34,38,39,
39,6,7,18,1,7,2,0,3,1,3,59,83,84,234,77,71,57,90,30,41,46,117,63,150,108,
182,101,52,100,35,114,160,132,177,1,8,144,242,254,179,119,5,231,180,197,117,
171,110,168,55,141,137,68,205,174,66,60,200,93,193,254,120,254,56,120,1,156,
2,191,1,89,0,0,3,0,120,0,0,4,236,5,205,0,20,0,29,0,38,0,0,33,38,53,55,38,
38,53,52,54,36,51,50,22,22,21,20,0,7,7,20,23,1,52,38,39,6,2,7,54,54,37,20,
22,23,54,18,55,6,6,2,27,13,5,189,222,168,1,30,155,148,246,137,254,222,252,
4,14,1,88,134,117,27,51,13,162,180,253,3,123,113,17,54,23,148,182,241,88,
184,27,251,194,141,230,129,126,225,139,211,254,255,19,165,161,182,3,216,122,
175,30,133,254,151,145,20,164,110,119,150,21,181,1,97,105,25,192,0,0,2,0,
100,255,29,4,221,5,199,0,17,0,28,0,0,5,2,3,6,35,34,38,53,54,18,36,51,50,22,
23,18,0,23,1,14,2,7,23,22,51,50,55,38,4,47,191,137,89,120,201,233,9,209,1,
22,83,44,37,17,87,1,9,116,253,141,33,147,111,27,3,89,125,103,79,54,227,1,
230,1,229,17,55,51,110,1,52,228,44,73,254,121,252,144,253,5,161,15,138,144,
61,10,19,14,209,0,0,1,0,60,1,180,5,128,5,224,0,37,0,0,1,34,38,38,2,39,6,3,
14,2,35,34,46,2,2,39,55,18,23,54,18,51,50,22,23,23,18,23,54,19,23,6,6,2,6,
6,4,1,43,55,85,85,16,60,140,19,45,44,26,49,53,74,71,76,24,170,107,70,106,
212,52,42,40,9,41,71,52,97,101,178,15,74,99,80,65,1,180,44,226,1,88,112,57,
254,175,45,50,17,30,137,193,1,22,114,53,254,71,135,253,1,110,53,40,203,254,
150,137,188,1,154,53,80,242,254,249,168,65,0,0,1,0,200,0,54,5,31,5,133,0,
19,0,0,1,23,2,7,54,55,7,6,5,2,3,39,18,19,6,7,55,54,37,54,3,30,174,96,41,244,
232,12,193,254,199,67,34,187,25,66,250,146,12,144,1,25,53,5,133,51,254,209,
154,17,9,164,4,24,254,227,254,112,24,1,90,1,43,25,23,166,23,26,206,0,0,1,
0,220,255,234,2,110,5,196,0,6,0,0,1,2,2,3,39,18,19,2,110,15,117,86,184,164,
52,5,170,254,237,252,246,254,93,50,3,12,2,156,0,1,0,92,1,122,5,44,3,133,0,
16,0,0,1,54,53,52,38,35,34,5,55,36,33,50,22,21,20,6,7,4,38,67,47,55,112,252,
201,23,2,112,1,117,100,112,65,63,2,11,62,76,44,31,37,174,28,119,111,83,153,
57,0,1,0,85,0,183,3,176,5,204,0,41,0,0,1,54,18,55,6,6,35,34,38,53,52,54,54,
55,39,34,6,7,39,55,54,51,50,22,22,21,20,7,6,7,54,55,54,54,51,50,22,21,20,
2,2,7,1,74,130,220,56,118,233,80,62,52,76,179,48,57,54,135,148,15,39,248,
127,99,82,43,137,153,34,82,195,101,59,22,39,47,142,236,122,1,52,126,1,36,
124,36,46,52,67,27,132,225,45,3,15,26,162,5,39,19,41,36,42,161,179,72,2,65,
33,13,56,46,70,254,238,254,211,117,0,1,0,40,0,35,4,230,5,197,0,22,0,0,1,6,
7,18,19,7,2,1,6,2,7,39,54,18,54,54,51,50,22,22,23,54,55,4,127,95,121,180,
139,174,212,254,218,104,205,80,145,70,180,192,83,41,38,65,88,37,74,93,5,66,
130,254,254,116,254,59,78,2,172,2,5,128,254,187,164,87,151,1,49,252,63,81,
146,76,143,131,0,2,0,220,255,234,4,8,5,196,0,6,0,13,0,0,1,2,2,3,39,18,19,
5,2,2,3,39,18,19,2,110,15,117,86,184,164,52,2,84,15,117,86,184,164,52,5,170,
254,237,252,246,254,93,50,3,12,2,156,26,254,237,252,246,254,93,50,3,12,2,
156,0,0,3,0,220,255,234,5,122,5,196,0,6,0,13,0,20,0,0,1,2,2,3,39,18,19,5,
2,2,3,39,18,19,5,2,2,3,39,18,19,2,110,15,117,86,184,164,52,2,64,15,117,86,
184,164,52,2,64,15,117,86,184,164,52,5,170,254,237,252,246,254,93,50,3,12,
2,156,26,254,237,252,246,254,93,50,3,12,2,156,26,254,237,252,246,254,93,50,
3,12,2,156,0,1,0,100,2,115,1,152,3,167,0,11,0,0,1,20,6,35,34,38,53,52,54,
51,50,22,1,152,99,64,60,85,96,66,62,84,3,20,68,93,83,62,65,98,88,0,0,0,0,
0,0,15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,40,0,94,0,3,0,1,4,
9,0,2,0,14,0,134,0,3,0,1,4,9,0,3,0,78,0,148,0,3,0,1,4,9,0,4,0,40,0,94,0,3,
0,1,4,9,0,5,0,30,0,226,0,3,0,1,4,9,0,6,0,36,1,0,0,3,0,1,4,9,0,7,0,68,1,36,
0,3,0,1,4,9,0,8,0,42,1,104,0,3,0,1,4,9,0,9,0,40,1,146,0,3,0,1,4,9,0,10,0,
96,1,186,0,3,0,1,4,9,0,11,0,62,2,26,0,3,0,1,4,9,0,12,0,60,2,88,0,3,0,1,4,
9,0,13,2,150,2,148,0,3,0,1,4,9,0,14,0,52,5,42,0,67,0,111,0,112,0,121,0,114,
0,105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,50,0,32,0,71,0,111,0,111,0,
103,0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,65,0,108,0,108,0,32,0,82,
0,105,0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,115,0,101,0,114,0,118,0,101,
0,100,0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,80,0,
104,0,111,0,101,0,110,0,105,0,99,0,105,0,97,0,110,0,82,0,101,0,103,0,117,
0,108,0,97,0,114,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,
0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,111,
0,32,0,83,0,97,0,110,0,115,0,32,0,80,0,104,0,111,0,101,0,110,0,105,0,99,0,
105,0,97,0,110,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,32,0,49,0,46,0,
48,0,52,0,32,0,117,0,104,0,78,0,111,0,116,0,111,0,83,0,97,0,110,0,115,0,80,
0,104,0,111,0,101,0,110,0,105,0,99,0,105,0,97,0,110,0,78,0,111,0,116,0,111,
0,32,0,105,0,115,0,32,0,97,0,32,0,116,0,114,0,97,0,100,0,101,0,109,0,97,0,
114,0,107,0,32,0,111,0,102,0,32,0,71,0,111,0,111,0,103,0,108,0,101,0,32,0,
73,0,110,0,99,0,46,0,77,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,
73,0,109,0,97,0,103,0,105,0,110,0,103,0,32,0,73,0,110,0,99,0,46,0,77,0,111,
0,110,0,111,0,116,0,121,0,112,0,101,0,32,0,68,0,101,0,115,0,105,0,103,0,110,
0,32,0,84,0,101,0,97,0,109,0,68,0,97,0,116,0,97,0,32,0,117,0,110,0,104,0,
105,0,110,0,116,0,101,0,100,0,46,0,32,0,68,0,101,0,115,0,105,0,103,0,110,
0,101,0,100,0,32,0,98,0,121,0,32,0,77,0,111,0,110,0,111,0,116,0,121,0,112,
0,101,0,32,0,100,0,101,0,115,0,105,0,103,0,110,0,32,0,116,0,101,0,97,0,109,
0,46,0,104,0,116,0,116,0,112,0,58,0,47,0,47,0,119,0,119,0,119,0,46,0,103,
0,111,0,111,0,103,0,108,0,101,0,46,0,99,0,111,0,109,0,47,0,103,0,101,0,116,
0,47,0,110,0,111,0,116,0,111,0,47,0,104,0,116,0,116,0,112,0,58,0,47,0,47,
0,119,0,119,0,119,0,46,0,109,0,111,0,110,0,111,0,116,0,121,0,112,0,101,0,
46,0,99,0,111,0,109,0,47,0,115,0,116,0,117,0,100,0,105,0,111,0,84,0,104,0,
105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,
97,0,114,0,101,0,32,0,105,0,115,0,32,0,108,0,105,0,99,0,101,0,110,0,115,0,
101,0,100,0,32,0,117,0,110,0,100,0,101,0,114,0,32,0,116,0,104,0,101,0,32,
0,83,0,73,0,76,0,32,0,79,0,112,0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,
32,0,76,0,105,0,99,0,101,0,110,0,115,0,101,0,44,0,32,0,86,0,101,0,114,0,115,
0,105,0,111,0,110,0,32,0,49,0,46,0,49,0,46,0,32,0,84,0,104,0,105,0,115,0,
32,0,70,0,111,0,110,0,116,0,32,0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,
101,0,32,0,105,0,115,0,32,0,100,0,105,0,115,0,116,0,114,0,105,0,98,0,117,
0,116,0,101,0,100,0,32,0,111,0,110,0,32,0,97,0,110,0,32,0,34,0,65,0,83,0,
32,0,73,0,83,0,34,0,32,0,66,0,65,0,83,0,73,0,83,0,44,0,32,0,87,0,73,0,84,
0,72,0,79,0,85,0,84,0,32,0,87,0,65,0,82,0,82,0,65,0,78,0,84,0,73,0,69,0,83,
0,32,0,79,0,82,0,32,0,67,0,79,0,78,0,68,0,73,0,84,0,73,0,79,0,78,0,83,0,32,
0,79,0,70,0,32,0,65,0,78,0,89,0,32,0,75,0,73,0,78,0,68,0,44,0,32,0,101,0,
105,0,116,0,104,0,101,0,114,0,32,0,101,0,120,0,112,0,114,0,101,0,115,0,115,
0,32,0,111,0,114,0,32,0,105,0,109,0,112,0,108,0,105,0,101,0,100,0,46,0,32,
0,83,0,101,0,101,0,32,0,116,0,104,0,101,0,32,0,83,0,73,0,76,0,32,0,79,0,112,
0,101,0,110,0,32,0,70,0,111,0,110,0,116,0,32,0,76,0,105,0,99,0,101,0,110,
0,115,0,101,0,32,0,102,0,111,0,114,0,32,0,116,0,104,0,101,0,32,0,115,0,112,
0,101,0,99,0,105,0,102,0,105,0,99,0,32,0,108,0,97,0,110,0,103,0,117,0,97,
0,103,0,101,0,44,0,32,0,112,0,101,0,114,0,109,0,105,0,115,0,115,0,105,0,111,
0,110,0,115,0,32,0,97,0,110,0,100,0,32,0,108,0,105,0,109,0,105,0,116,0,97,
0,116,0,105,0,111,0,110,0,115,0,32,0,103,0,111,0,118,0,101,0,114,0,110,0,
105,0,110,0,103,0,32,0,121,0,111,0,117,0,114,0,32,0,117,0,115,0,101,0,32,
0,111,0,102,0,32,0,116,0,104,0,105,0,115,0,32,0,70,0,111,0,110,0,116,0,32,
0,83,0,111,0,102,0,116,0,119,0,97,0,114,0,101,0,46,0,104,0,116,0,116,0,112,
0,58,0,47,0,47,0,115,0,99,0,114,0,105,0,112,0,116,0,115,0,46,0,115,0,105,
0,108,0,46,0,111,0,114,0,103,0,47,0,79,0,70,0,76,0,2,0,0,0,0,0,0,255,102,
0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,0,0,1,2,0,2,0,3,1,3,1,
4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,
20,1,21,1,22,1,23,1,24,1,25,1,26,1,27,1,28,1,29,1,30,1,31,4,110,117,108,108,
6,117,49,48,57,48,48,6,117,49,48,57,48,49,6,117,49,48,57,48,50,6,117,49,48,
57,48,51,6,117,49,48,57,48,52,6,117,49,48,57,48,53,6,117,49,48,57,48,54,6,
117,49,48,57,48,55,6,117,49,48,57,48,56,6,117,49,48,57,48,57,6,117,49,48,
57,48,65,6,117,49,48,57,48,66,6,117,49,48,57,48,67,6,117,49,48,57,48,68,6,
117,49,48,57,48,69,6,117,49,48,57,48,70,6,117,49,48,57,49,48,6,117,49,48,
57,49,49,6,117,49,48,57,49,50,6,117,49,48,57,49,51,6,117,49,48,57,49,52,6,
117,49,48,57,49,53,6,117,49,48,57,49,54,6,117,49,48,57,49,55,6,117,49,48,
57,49,56,6,117,49,48,57,49,57,6,116,119,111,95,112,104,8,116,104,114,101,
101,95,112,104,6,117,49,48,57,49,70,0,0,0,0,0,2,0,8,0,2,255,255,0,3,};
#endif
