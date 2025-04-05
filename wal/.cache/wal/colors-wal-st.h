const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#081430", /* black   */
  [1] = "#9375B5", /* red     */
  [2] = "#A66BA4", /* green   */
  [3] = "#DF719E", /* yellow  */
  [4] = "#9B74C9", /* blue    */
  [5] = "#7581DE", /* magenta */
  [6] = "#EB8DAA", /* cyan    */
  [7] = "#c1c4cb", /* white   */

  /* 8 bright colors */
  [8]  = "#606675",  /* black   */
  [9]  = "#9375B5",  /* red     */
  [10] = "#A66BA4", /* green   */
  [11] = "#DF719E", /* yellow  */
  [12] = "#9B74C9", /* blue    */
  [13] = "#7581DE", /* magenta */
  [14] = "#EB8DAA", /* cyan    */
  [15] = "#c1c4cb", /* white   */

  /* special colors */
  [256] = "#081430", /* background */
  [257] = "#c1c4cb", /* foreground */
  [258] = "#c1c4cb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
