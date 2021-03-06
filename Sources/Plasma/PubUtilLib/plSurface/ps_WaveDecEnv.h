


static const uint32_t ps_WaveDecEnvbyteLen = 84;

static const uint8_t ps_WaveDecEnvCodes[] = {
	0x1,	0x1,	0xff,	0xff,
	0x42,	0x0,	0x0,	0x0,
	0x0,	0x0,	0xf,	0xb0,
	0x49,	0x0,	0x0,	0x0,
	0x1,	0x0,	0xf,	0xb0,
	0x0,	0x0,	0xe4,	0xb4,
	0x49,	0x0,	0x0,	0x0,
	0x2,	0x0,	0xf,	0xb0,
	0x0,	0x0,	0xe4,	0xb4,
	0x4d,	0x0,	0x0,	0x0,
	0x3,	0x0,	0xf,	0xb0,
	0x0,	0x0,	0xe4,	0xb4,
	0x5,	0x0,	0x0,	0x0,
	0x0,	0x0,	0x7,	0x80,
	0x3,	0x0,	0xe4,	0xb0,
	0x0,	0x0,	0xe4,	0x90,
	0x5,	0x0,	0x0,	0x40,
	0x0,	0x0,	0x8,	0x80,
	0x0,	0x0,	0xe4,	0xb0,
	0x0,	0x0,	0xe4,	0x90,
	0xff,	0xff,	0x0,	0x0
	};

static const plShaderDecl ps_WaveDecEnvDecl("sha/ps_WaveDecEnv.inl", ps_WaveDecEnv, ps_WaveDecEnvbyteLen, ps_WaveDecEnvCodes);

static const plShaderRegister ps_WaveDecEnvRegister(&ps_WaveDecEnvDecl);

