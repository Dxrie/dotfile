/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0a090cff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc1c1c2ff, 0x0a090cff, 0x565669ff },
	[SchemeSel]  = { 0xc1c1c2ff, 0x3D6F87ff, 0xA04F5Fff },
	[SchemeUrg]  = { 0xc1c1c2ff, 0xA04F5Fff, 0x3D6F87ff },
};
