


static const uint32_t ps_PassthroughbyteLen = 92;

static const uint8_t ps_PassthroughCodes[] = {
	0x0,	0x3,	0xff,	0xff,
	0x51,	0x0,	0x0,	0x5,
	0x0,	0x0,	0xf,	0xa0,
	0x0,	0x0,	0x80,	0x3f,
	0x0,	0x0,	0x80,	0xbf,
	0x0,	0x0,	0x0,	0x0,
	0x0,	0x0,	0x0,	0x0,
	0x1f,	0x0,	0x0,	0x2,
	0x5,	0x0,	0x0,	0x80,
	0x0,	0x0,	0x3,	0x90,
	0x1f,	0x0,	0x0,	0x2,
	0x0,	0x0,	0x0,	0x90,
	0x0,	0x8,	0xf,	0xa0,
	0x4,	0x0,	0x0,	0x4,
	0x0,	0x0,	0x3,	0x80,
	0x0,	0x0,	0xe4,	0x90,
	0x0,	0x0,	0xe4,	0xa0,
	0x0,	0x0,	0xe2,	0xa0,
	0x42,	0x0,	0x0,	0x3,
	0x0,	0x8,	0xf,	0x80,
	0x0,	0x0,	0xe4,	0x80,
	0x0,	0x8,	0xe4,	0xa0,
	0xff,	0xff,	0x0,	0x0
	};

static const plShaderDecl ps_PassthroughDecl("sha/ps_Passthrough.inl", ps_Passthrough, ps_PassthroughbyteLen, ps_PassthroughCodes);

static const plShaderRegister ps_PassthroughRegister(&ps_PassthroughDecl);
