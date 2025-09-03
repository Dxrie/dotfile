const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f2024", /* black   */
  [1] = "#B26E4E", /* red     */
  [2] = "#2F8379", /* green   */
  [3] = "#608A7A", /* yellow  */
  [4] = "#AA9473", /* blue    */
  [5] = "#FA8F44", /* magenta */
  [6] = "#E5965F", /* cyan    */
  [7] = "#c3c7c8", /* white   */

  /* 8 bright colors */
  [8]  = "#5e7074",  /* black   */
  [9]  = "#B26E4E",  /* red     */
  [10] = "#2F8379", /* green   */
  [11] = "#608A7A", /* yellow  */
  [12] = "#AA9473", /* blue    */
  [13] = "#FA8F44", /* magenta */
  [14] = "#E5965F", /* cyan    */
  [15] = "#c3c7c8", /* white   */

  /* special colors */
  [256] = "#0f2024", /* background */
  [257] = "#c3c7c8", /* foreground */
  [258] = "#c3c7c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
