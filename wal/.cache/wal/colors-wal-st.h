const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a090c", /* black   */
  [1] = "#A04F5F", /* red     */
  [2] = "#3D6F87", /* green   */
  [3] = "#56758C", /* yellow  */
  [4] = "#AD758A", /* blue    */
  [5] = "#6B90A8", /* magenta */
  [6] = "#7BACC7", /* cyan    */
  [7] = "#c1c1c2", /* white   */

  /* 8 bright colors */
  [8]  = "#565669",  /* black   */
  [9]  = "#A04F5F",  /* red     */
  [10] = "#3D6F87", /* green   */
  [11] = "#56758C", /* yellow  */
  [12] = "#AD758A", /* blue    */
  [13] = "#6B90A8", /* magenta */
  [14] = "#7BACC7", /* cyan    */
  [15] = "#c1c1c2", /* white   */

  /* special colors */
  [256] = "#0a090c", /* background */
  [257] = "#c1c1c2", /* foreground */
  [258] = "#c1c1c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
