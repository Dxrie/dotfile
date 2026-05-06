static const char norm_fg[] = "#c3c2c7";
static const char norm_bg[] = "#110e22";
static const char norm_border[] = "#615e72";

static const char sel_fg[] = "#c3c2c7";
static const char sel_bg[] = "#6D71B4";
static const char sel_border[] = "#c3c2c7";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
