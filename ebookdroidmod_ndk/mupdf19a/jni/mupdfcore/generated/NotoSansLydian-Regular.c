#ifndef __STRICT_ANSI__
#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
#if !defined(__ICC)
#define HAVE_INCBIN
#endif
#endif
#endif

#ifdef HAVE_INCBIN
const int fz_font_NotoSansLydian_Regular_ttf_size = 4268;
asm(".section .rodata");
asm(".global fz_font_NotoSansLydian_Regular_ttf");
asm(".type fz_font_NotoSansLydian_Regular_ttf STT_OBJECT");
asm(".size fz_font_NotoSansLydian_Regular_ttf, 4268");
asm(".balign 64");
asm("fz_font_NotoSansLydian_Regular_ttf:");
asm(".incbin \"resources/fonts/noto/NotoSansLydian-Regular.ttf\"");
#else
const int fz_font_NotoSansLydian_Regular_ttf_size = 4268;
const char fz_font_NotoSansLydian_Regular_ttf[] = {
0,1,0,0,0,11,0,128,0,3,0,48,79,83,47,50,122,231,111,56,0,0,1,56,0,0,0,96,
99,109,97,112,0,221,36,237,0,0,2,20,0,0,0,184,103,97,115,112,0,22,0,35,0,
0,16,156,0,0,0,16,103,108,121,102,155,247,90,181,0,0,3,12,0,0,7,110,104,101,
97,100,5,1,190,163,0,0,0,188,0,0,0,54,104,104,101,97,15,254,5,85,0,0,0,244,
0,0,0,36,104,109,116,120,144,181,8,102,0,0,1,152,0,0,0,124,108,111,99,97,
25,9,26,251,0,0,2,204,0,0,0,64,109,97,120,112,0,35,0,48,0,0,1,24,0,0,0,32,
110,97,109,101,140,65,184,157,0,0,10,124,0,0,6,0,112,111,115,116,255,105,
0,102,0,0,16,124,0,0,0,32,0,1,0,0,0,1,7,174,121,122,209,149,95,15,60,245,
0,11,8,0,0,0,0,0,204,74,160,90,0,0,0,0,210,40,203,250,0,20,255,216,7,91,5,
203,0,0,0,9,0,2,0,0,0,0,0,0,0,1,0,0,8,141,253,168,0,0,7,121,0,20,0,20,7,91,
0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,0,1,0,0,0,31,0,47,0,3,0,0,0,0,0,1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,210,1,144,0,5,0,0,5,154,5,51,0,0,1,31,
5,154,5,51,0,0,3,209,0,102,2,0,0,0,2,11,5,2,4,5,4,2,2,4,0,0,0,0,2,0,0,0,0,
0,0,0,2,0,0,0,71,79,79,71,0,64,0,0,255,255,8,141,253,168,0,0,8,141,2,88,0,
0,0,1,0,0,0,0,4,0,5,154,0,0,0,32,0,0,4,0,0,102,0,0,0,0,4,20,0,0,2,20,0,0,
5,67,0,20,5,52,0,110,5,14,0,63,4,95,0,60,4,160,0,60,4,160,0,60,2,172,0,250,
5,16,0,125,4,41,0,60,4,160,0,60,6,0,0,60,5,109,0,60,5,168,0,125,4,240,0,125,
4,142,0,30,4,132,0,30,4,95,0,60,4,169,0,100,4,230,0,80,4,230,0,80,4,230,0,
80,7,121,0,30,5,99,0,40,6,162,0,60,5,57,0,80,5,121,0,40,3,227,0,100,0,0,0,
2,0,3,0,1,0,0,0,20,0,3,0,10,0,0,0,84,0,4,0,64,0,0,0,12,0,8,0,2,0,4,0,0,0,
13,0,32,0,160,254,255,255,255,0,0,0,0,0,13,0,32,0,160,254,255,255,255,0,1,
255,245,255,227,255,99,1,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,12,0,0,0,0,0,100,
0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,13,0,0,0,13,0,0,0,2,0,0,0,32,
0,0,0,32,0,0,0,3,0,0,0,160,0,0,0,160,0,0,0,3,0,0,254,255,0,0,254,255,0,0,
0,1,0,1,9,32,0,1,9,57,0,0,0,4,0,1,9,63,0,1,9,63,0,0,0,30,0,0,0,20,0,20,0,
20,0,20,0,55,0,109,0,152,0,174,0,201,0,229,0,243,1,22,1,49,1,69,1,99,1,127,
1,174,1,209,2,12,2,30,2,51,2,122,2,147,2,177,2,213,3,5,3,37,3,74,3,131,3,
158,3,183,0,2,0,102,0,0,3,154,5,182,0,3,0,7,0,0,51,17,33,17,37,33,17,33,102,
3,52,253,47,2,110,253,146,5,182,250,74,98,4,242,0,2,0,20,0,0,5,47,5,188,0,
7,0,13,0,0,33,3,1,7,35,1,51,1,1,6,7,1,1,3,4,112,208,253,95,49,186,2,59,166,
2,58,253,112,35,28,254,255,2,7,129,2,45,254,85,130,5,188,250,68,4,254,139,
80,253,92,1,73,1,91,0,3,0,110,0,0,4,108,5,182,0,15,0,24,0,33,0,0,33,33,34,
36,53,52,54,55,53,38,38,53,52,36,33,33,7,35,34,6,21,20,22,51,33,5,34,6,21,
20,22,51,33,17,4,108,253,254,239,254,243,159,169,136,142,1,4,1,39,1,161,184,
242,185,171,154,174,1,14,254,231,184,176,171,175,1,39,220,196,144,177,29,
10,25,169,130,187,175,158,105,120,128,110,156,126,129,138,134,2,15,0,1,0,
63,255,236,4,145,5,203,0,23,0,0,19,54,51,50,4,18,21,16,0,33,34,38,39,53,22,
51,50,0,17,16,0,35,34,7,63,172,232,215,1,63,168,254,163,254,189,111,173,93,
195,156,241,1,7,254,242,236,157,175,5,117,86,183,254,172,227,254,152,254,
119,25,34,160,58,1,50,1,28,1,18,1,60,80,0,1,0,60,255,236,3,151,5,182,0,7,
0,0,1,17,35,17,1,39,1,17,3,151,184,253,212,119,2,163,5,182,250,74,2,66,253,
170,110,2,214,2,134,0,0,1,0,60,0,0,3,216,5,182,0,10,0,0,33,1,55,1,17,1,55,
1,17,51,17,3,32,253,28,84,2,144,253,178,84,1,250,184,1,196,143,254,111,1,
131,1,105,143,254,203,2,174,250,74,0,1,0,60,0,0,3,216,5,182,0,10,0,0,1,17,
35,17,1,39,1,17,1,39,1,3,216,184,254,6,84,2,78,253,112,84,2,228,5,182,250,
74,2,174,254,203,143,1,105,1,130,254,112,143,1,196,0,1,0,250,0,0,1,178,5,
182,0,3,0,0,1,17,35,17,1,178,184,5,182,250,74,5,182,0,0,2,0,125,0,0,4,72,
5,182,0,8,0,16,0,0,33,35,32,0,17,16,0,33,51,7,32,0,17,16,33,51,17,4,72,207,
254,143,254,117,1,123,1,86,250,224,254,236,254,235,2,72,9,1,126,1,107,1,86,
1,119,157,254,226,254,232,253,187,4,123,0,1,0,60,0,0,3,97,5,182,0,10,0,0,
33,17,1,39,1,1,55,1,17,51,17,2,169,253,246,99,2,39,253,217,99,2,10,184,2,
82,254,83,133,1,195,1,196,133,254,82,2,46,250,74,0,1,0,60,0,0,3,216,5,182,
0,6,0,0,1,17,35,17,1,39,1,3,216,184,253,112,84,2,228,5,182,250,74,4,243,254,
112,143,1,196,0,1,0,60,0,0,5,56,5,182,0,12,0,0,33,35,17,1,35,3,1,39,1,51,
1,1,51,5,56,184,254,253,168,255,254,229,127,1,91,131,1,14,1,88,184,4,168,
254,179,1,67,254,149,106,1,189,254,162,1,186,0,1,0,60,0,0,4,165,5,202,0,11,
0,0,33,35,17,1,35,39,7,1,55,1,1,51,4,165,184,254,143,129,1,3,254,69,128,1,
132,1,173,184,4,205,254,128,3,3,2,13,112,254,46,1,190,0,0,2,0,125,0,195,5,
43,5,25,0,13,0,25,0,0,1,16,0,33,34,36,38,53,52,54,36,51,32,0,1,20,22,51,50,
54,53,52,38,35,34,6,5,43,254,190,254,233,183,254,242,144,144,1,16,184,1,23,
1,63,252,20,207,196,196,211,204,200,200,206,2,238,254,254,254,215,136,253,
167,165,253,136,254,215,254,254,193,200,198,195,190,203,202,0,0,2,0,125,0,
0,4,40,5,182,0,10,0,19,0,0,1,17,35,17,35,32,36,53,52,36,33,23,35,34,6,21,
20,22,51,51,4,40,184,168,254,231,254,206,1,25,1,15,203,186,194,181,196,218,
147,5,182,250,74,2,57,232,221,217,223,158,139,141,155,142,0,1,0,30,255,216,
4,42,5,203,0,39,0,0,19,54,54,51,50,22,21,20,7,22,21,20,7,6,21,20,22,23,7,
38,38,53,52,55,54,53,52,35,34,7,39,54,54,53,52,38,35,34,6,7,30,90,235,132,
220,242,142,118,19,19,81,98,113,139,121,19,19,95,38,59,28,121,123,141,125,
98,168,106,5,51,71,81,188,175,181,128,49,156,51,92,92,35,55,108,79,134,101,
168,92,51,76,76,46,103,16,156,32,151,102,105,118,56,71,0,0,1,0,30,0,0,4,102,
5,182,0,7,0,0,33,35,17,33,53,33,21,33,2,159,184,254,55,4,72,254,57,5,24,158,
158,0,0,1,0,60,0,0,3,151,5,202,0,7,0,0,33,17,1,55,1,17,51,17,2,223,253,93,
119,2,44,184,2,130,2,215,113,253,169,2,67,250,74,0,0,3,0,100,255,236,4,69,
5,203,0,22,0,34,0,46,0,0,1,22,22,21,20,4,35,34,36,53,52,37,38,38,53,52,54,
51,50,22,21,20,6,5,6,6,21,20,22,51,50,54,53,52,38,39,54,53,52,38,35,34,6,
21,20,22,22,2,253,177,151,254,246,225,237,254,247,1,49,136,121,248,200,202,
246,133,254,166,142,133,150,158,149,156,159,140,250,138,122,119,137,53,101,
3,6,86,189,120,179,220,207,186,249,142,78,179,114,157,191,188,162,110,174,
164,60,148,106,107,122,122,113,98,145,227,104,169,99,102,103,98,58,91,76,
0,0,1,0,80,0,0,4,150,5,182,0,11,0,0,1,33,17,35,17,33,53,33,17,51,17,33,4,
150,254,57,184,254,57,1,199,184,1,199,2,154,253,102,2,154,156,2,128,253,128,
0,0,1,0,80,0,0,4,150,5,182,0,15,0,0,1,33,17,35,17,33,53,33,17,33,53,33,21,
33,17,33,4,150,254,57,184,254,57,1,199,254,57,4,70,254,57,1,199,2,154,253,
102,2,154,156,1,226,158,158,254,30,0,1,0,80,0,0,4,150,5,182,0,19,0,0,1,33,
17,33,21,33,53,33,17,33,53,33,17,33,53,33,21,33,17,33,4,150,254,57,1,199,
251,186,1,199,254,57,1,199,254,57,4,70,254,57,1,199,2,154,254,4,158,158,1,
252,156,1,226,158,158,254,30,0,0,1,0,30,0,0,7,91,5,182,0,24,0,0,33,35,3,38,
39,6,7,1,35,3,38,39,6,7,3,35,1,51,1,22,23,54,55,1,51,7,91,195,223,55,16,28,
52,254,247,198,254,56,22,22,48,224,195,1,131,191,1,15,58,12,11,63,1,24,191,
3,118,212,138,179,173,252,140,3,109,195,164,156,192,252,136,5,182,252,78,
208,87,75,214,3,184,0,0,1,0,40,0,0,5,59,5,182,0,14,0,0,1,17,54,55,19,51,1,
17,35,17,1,51,19,23,17,3,13,66,72,232,188,253,210,184,253,211,188,246,123,
5,182,253,138,123,120,1,131,252,119,253,211,2,45,3,137,254,103,217,2,114,
0,1,0,60,0,0,6,102,5,202,0,15,0,0,1,17,35,17,3,35,1,55,1,1,51,1,1,23,1,35,
3,173,184,206,138,254,159,127,1,38,1,20,184,1,20,1,38,127,254,159,138,4,177,
251,79,4,177,254,251,1,186,100,254,147,1,89,254,167,1,109,100,254,70,0,0,
1,0,80,255,236,4,183,5,202,0,36,0,0,19,54,54,51,50,22,23,62,2,53,52,38,39,
55,22,22,21,20,6,7,6,6,21,20,22,23,7,38,38,53,52,55,38,35,34,7,80,77,207,
112,91,175,66,99,68,38,191,155,73,220,247,98,95,109,84,197,149,73,218,249,
63,87,126,177,124,2,139,84,99,56,47,76,83,100,67,78,154,48,145,69,220,128,
115,185,75,87,120,72,87,158,41,145,59,227,137,124,87,58,138,0,0,1,0,40,0,
0,5,81,5,182,0,9,0,0,1,1,7,1,17,35,17,1,39,1,3,5,2,76,117,254,61,184,254,
60,117,2,76,5,182,253,168,114,1,205,251,71,4,187,254,49,114,2,88,0,0,2,0,
100,0,253,3,97,4,164,0,5,0,8,0,0,19,1,51,17,35,9,3,100,2,69,184,184,253,187,
2,69,254,70,1,186,3,57,1,107,252,89,1,107,1,127,254,233,254,234,0,0,0,0,0,
15,0,186,0,3,0,1,4,9,0,0,0,94,0,0,0,3,0,1,4,9,0,1,0,32,0,94,0,3,0,1,4,9,0,
2,0,14,0,126,0,3,0,1,4,9,0,3,0,70,0,140,0,3,0,1,4,9,0,4,0,32,0,94,0,3,0,1,
4,9,0,5,0,30,0,210,0,3,0,1,4,9,0,6,0,28,0,240,0,3,0,1,4,9,0,7,0,68,1,12,0,
3,0,1,4,9,0,8,0,42,1,80,0,3,0,1,4,9,0,9,0,40,1,122,0,3,0,1,4,9,0,10,0,96,
1,162,0,3,0,1,4,9,0,11,0,62,2,2,0,3,0,1,4,9,0,12,0,60,2,64,0,3,0,1,4,9,0,
13,2,150,2,124,0,3,0,1,4,9,0,14,0,52,5,18,0,67,0,111,0,112,0,121,0,114,0,
105,0,103,0,104,0,116,0,32,0,50,0,48,0,49,0,50,0,32,0,71,0,111,0,111,0,103,
0,108,0,101,0,32,0,73,0,110,0,99,0,46,0,32,0,65,0,108,0,108,0,32,0,82,0,105,
0,103,0,104,0,116,0,115,0,32,0,82,0,101,0,115,0,101,0,114,0,118,0,101,0,100,
0,46,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,32,0,76,0,121,0,
100,0,105,0,97,0,110,0,82,0,101,0,103,0,117,0,108,0,97,0,114,0,77,0,111,0,
110,0,111,0,116,0,121,0,112,0,101,0,32,0,73,0,109,0,97,0,103,0,105,0,110,
0,103,0,32,0,45,0,32,0,78,0,111,0,116,0,111,0,32,0,83,0,97,0,110,0,115,0,
32,0,76,0,121,0,100,0,105,0,97,0,110,0,86,0,101,0,114,0,115,0,105,0,111,0,
110,0,32,0,49,0,46,0,48,0,51,0,32,0,117,0,104,0,78,0,111,0,116,0,111,0,83,
0,97,0,110,0,115,0,76,0,121,0,100,0,105,0,97,0,110,0,78,0,111,0,116,0,111,
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
0,108,0,46,0,111,0,114,0,103,0,47,0,79,0,70,0,76,0,3,0,0,0,0,0,0,255,102,
0,102,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,3,0,8,0,10,0,14,0,7,255,
255,0,15,};
#endif