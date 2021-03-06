


static const uint32_t ps_CompCosinesbyteLen = 148;

static const uint8_t ps_CompCosinesCodes[] = {
	0x1,	0x1,	0xff,	0xff,
	0x42,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0xb0,
	0x42,	0x0,	0x0,	0x0,
	0x1,	0x0,	0xf,	0xb0,
	0x42,	0x0,	0x0,	0x0,
	0x2,	0x0,	0xf,	0xb0,
	0x42,	0x0,	0x0,	0x0,
	0x3,	0x0,	0xf,	0xb0,
	0x5,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x0,	0x0,	0xe4,	0xb4,
	0x0,	0x0,	0xe4,	0xa0,
	0x4,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x1,	0x0,	0xe4,	0xb4,
	0x1,	0x0,	0xe4,	0xa0,
	0x0,	0x0,	0xe4,	0x80,
	0x4,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x2,	0x0,	0xe4,	0xb4,
	0x2,	0x0,	0xe4,	0xa0,
	0x0,	0x0,	0xe4,	0x80,
	0x4,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x3,	0x0,	0xe4,	0xb4,
	0x3,	0x0,	0xe4,	0xa0,
	0x0,	0x0,	0xe4,	0x80,
	0x5,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x0,	0x0,	0xe4,	0x80,
	0x4,	0x0,	0xe4,	0xa0,
	0x2,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0x80,
	0x0,	0x0,	0xe4,	0x80,
	0x4,	0x0,	0xe4,	0xa0,
	0xff,	0xff,	0x0,	0x0
	};

static const plShaderDecl ps_CompCosinesDecl("sha/ps_CompCosines.inl", ps_CompCosines, ps_CompCosinesbyteLen, ps_CompCosinesCodes);

static const plShaderRegister ps_CompCosinesRegister(&ps_CompCosinesDecl);

