const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#110e22", /* black   */
  [1] = "#6D71B4", /* red     */
  [2] = "#737AC2", /* green   */
  [3] = "#82709B", /* yellow  */
  [4] = "#8F749E", /* blue    */
  [5] = "#A07CC3", /* magenta */
  [6] = "#9F8DAE", /* cyan    */
  [7] = "#c3c2c7", /* white   */

  /* 8 bright colors */
  [8]  = "#615e72",  /* black   */
  [9]  = "#6D71B4",  /* red     */
  [10] = "#737AC2", /* green   */
  [11] = "#82709B", /* yellow  */
  [12] = "#8F749E", /* blue    */
  [13] = "#A07CC3", /* magenta */
  [14] = "#9F8DAE", /* cyan    */
  [15] = "#c3c2c7", /* white   */

  /* special colors */
  [256] = "#110e22", /* background */
  [257] = "#c3c2c7", /* foreground */
  [258] = "#c3c2c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
