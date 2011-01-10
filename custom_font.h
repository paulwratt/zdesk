#ifndef CFONT_H
#define CFONT_H

#ifdef __cplusplus
extern "C" {
#endif
	
	int16 ofwf[256] =					/* tableau espacements des caracteres */
	{
		0, 7, 7, 7, 7, 8, 8, 8, 7, 8, 7, 7, 7, 7, 6, 7,
		6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7,
		3, 3, 5, 7, 6, 6, 7, 3, 4, 4, 6, 6, 3, 6, 2, 5,
		6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 2, 3, 4, 5, 4, 6,
		7, 6, 6, 6, 6, 5, 5, 6, 6, 2, 5, 6, 5, 7, 6, 6,
		6, 6, 6, 6, 6, 6, 6, 8, 6, 6, 6, 3, 5, 3, 6, 6,
		3, 5, 5, 5, 5, 5, 3, 5, 5, 4, 4, 5, 4, 8, 5, 5,
		5, 5, 4, 5, 3, 5, 5, 6, 6, 5, 6, 5, 2, 5, 7, 6,
		6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 6, 6,
		5, 8, 8, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 5,
		5, 4, 5, 5, 5, 6, 5, 5, 6, 7, 7, 8, 8, 3, 7, 7,
		5, 5, 8, 7, 8, 8, 6, 6, 6, 6, 5, 4, 8, 8, 8, 8,
		6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
		8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 8, 6, 8,
		7, 6, 6, 8, 7, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6,
		6, 6, 6, 6, 8, 8, 6, 7, 5, 5, 4, 7, 5, 5, 5, 6
	};	
	
	
	static uint32 my_font_8[512] =
	{
		0x00183C7E, 0x18181800, // 1
		0x00181818, 0x7E3C1800, // 2
		0x00080C7E, 0x7E0C0800, // 3
		0x0010307E, 0x7E301000, // 4
		0x3C99C3E7, 0xC3993C00, // 5
		0xFFFFFEFC, 0xF9F3E700, // 6
		0xE7C3993C, 0x99C3E700, // 7
		0x0002068C, 0xD8702000, // 8 
		0x7EC39195, 0x9981C37E, // 9
		0x183C3C3C, 0x7E103810, // 10
		0x000E0B08, 0x08387830, // 11
		0xF080DC90, 0x98101000, // 12
		0x60809C92, 0x7C121200, // 13
		0x0A0A0A1A, 0x1A32F2E2, // 14
		0xA0A0A0B0, 0xB0989E8E, // 15
		0x38444400, 0x44443800, // 16
		0x04040400, 0x04040400, // 17
		0x38040438, 0x40403800, // 18
		0x70080870, 0x08087000, // 19
		0x44444438, 0x04040400, // 20
		0x38404038, 0x04043800, // 21
		0x38404038, 0x44443800, // 22
		0x70080800, 0x08080800, // 23
		0x38444438, 0x44443800, // 24
		0x38444438, 0x04043800, // 25
		0x00007804, 0x78443800, // 26
		0x70407040, 0x7C101C00, // 27
		0x0F1F3F30, 0x30203C2E, // 28
		0xE0F0D808, 0x080878A8, // 29
		0x22161B0C, 0x0F5C7370, // 30
		0x0850B050, 0xA020C000, // 31
		0x00000000, 0x00000000, // 32
		0x40404040, 0x40004000, // 33
		0x48480000, 0x00000000, // 34
		0x00247E24, 0x247E2400, // 35
		0x103C5038, 0x14781000, // 36
		0x00480810, 0x10202400, // 37
		0x18241830, 0x4A443A00, // 38
		0x20204000, 0x00000000, // 39
		0x10204040, 0x40402010, // 40
		0x40201010, 0x10102040, // 41
		0x0028107C, 0x10280000, // 42
		0x0010107C, 0x10100000, // 43
		0x00000000, 0x00202040, // 44
		0x0000007C, 0x00000000, // 45
		0x00000000, 0x00004000, // 46
		0x08081010, 0x20204040, // 47
		0x38444444, 0x44443800, // 48
		0x10301010, 0x10103800, // 49
		0x38440408, 0x10207C00, // 50
		0x7C081038, 0x04443800, // 51
		0x08182848, 0x7C080800, // 52
		0x7C407804, 0x04443800, // 53
		0x18204078, 0x44443800, // 54
 		0x7C040408, 0x10101000, // 55
		0x38444438, 0x44443800, // 56
		0x3844443C, 0x04083000, // 57
		0x00004000, 0x00400000, // 58
		0x00002000, 0x00202040, // 59
		0x00102040, 0x20100000, // 60
		0x00007800, 0x78000000, // 61
		0x00402010, 0x20400000, // 62
		0x38440408, 0x10001000, // 63
		0x3C425A52, 0x5C403E00, // 64
		0x10284444, 0x7C444400, // 65
		0x78444478, 0x44447800, // 66
		0x38444040, 0x40443800, // 67
		0x70484444, 0x44487000, // 68		
		0x78404070, 0x40407800, // 69
		0x78404070, 0x40404000, // 70
		0x3844404C, 0x44443800, // 71
		0x4444447C, 0x44444400, // 72
		0x40404040, 0x40404000, // 73
		0x08080808, 0x08483000, // 74
		0x44485060, 0x50484400, // 75
		0x40404040, 0x40407800, // 76
		0x42665A42, 0x42424200, // 77
		0x4464544C, 0x44444400, // 78
		0x38444444, 0x44443800, // 79
		0x78444478, 0x40404000, // 80
		0x38444444, 0x54483400, // 81
		0x78444478, 0x50484400, // 82
		0x38444038, 0x04443800, // 83
		0x7C101010, 0x10101000, // 84
		0x44444444, 0x44443800, // 85
		0x44444444, 0x28281000, // 86
		0x41414149, 0x2A2A1400, // 87
		0x44442810, 0x28444400, // 88
		0x44444428, 0x10101000, // 89
		0x7C040810, 0x20407C00, // 90
		0x60404040, 0x40406000, // 91
		0x40402020, 0x10100808, // 92
		0x60202020, 0x20206000, // 93
		0x10284400, 0x00000000, // 94
		0x00000000, 0x00007C00, // 95
		0x40402000, 0x00000000, // 96
		0x00003008, 0x38483800, // 97
		0x40407048, 0x48487000, // 98
		0x00003048, 0x40483000, // 99
		0x08083848, 0x48483800, // 100
		0x00003048, 0x78403800, // 101
		0x30404060, 0x40404000, // 102
		0x00003848, 0x48380870, // 103
		0x40407048, 0x48484800, // 104
		0x20006020, 0x20207000, // 105
		0x10001010, 0x10105020, // 106
		0x40404850, 0x60504800, // 107
		0x60202020, 0x20207000, // 108
		0x00007649, 0x49494900, // 109
		0x00007048, 0x48484800, // 110
		0x00003048, 0x48483000, // 111
		0x00007048, 0x48487040, // 112
		0x00003848, 0x48483808, // 113
		0x00005060, 0x40404000, // 114
		0x00003840, 0x30087000, // 115
		0x40406040, 0x40402000, // 116
		0x00004848, 0x48483800, // 117
		0x00004848, 0x48502000, // 118
		0x00004444, 0x54382800, // 119
		0x00004428, 0x10284400, // 120
		0x00004848, 0x48380870, // 121
		0x00007C08, 0x10207C00, // 122
		0x18202040, 0x20201800, // 123
		0x40404040, 0x40404040, // 124
		0x60101008, 0x10106000, // 125
		0x0020724E, 0x04000000, // 126
		0x00102828, 0x447C0000, // 127
		0x38444040, 0x44381020, // 128
		0x48004848, 0x48483800, // 129
		0x10203048, 0x78403800, // 130
		0x30483008, 0x38483800, // 131
		0x28003008, 0x38483800, // 132
		0x10083008, 0x38483800, // 133
		0x10103008, 0x38483800, // 134
		0x00304840, 0x48301060, // 135
		0x10283048, 0x78403800, // 136
		0x28003048, 0x78403800, // 137
		0x20103048, 0x78403800, // 138
		0x50006020, 0x20207000, // 139
		0x20506020, 0x20207000, // 140
		0x20106020, 0x20207000, // 141
		0x28001028, 0x447C4400, // 142
		0x10001028, 0x447C4400, // 143
		0x10207840, 0x70407800, // 144
		0x00003E09, 0x3F483E00, // 145
		0x1F38484E, 0x78484F00, // 146
		0x30483048, 0x48483000, // 147
		0x48003048, 0x48483000, // 148
		0x20103048, 0x48483000, // 149
		0x30480048, 0x48483800, // 150
		0x20100048, 0x48483800, // 151
		0x48004848, 0x48380870, // 152
		0x28003844, 0x44443800, // 153
		0x44004444, 0x44443800, // 154
		0x10385450, 0x54381000, // 155
		0x18242078, 0x20207800, // 156
		0x44443810, 0x7C101000, // 157
		0x18244478, 0x44447840, // 158
		0x18202070, 0x20204000, // 159
		0x10203008, 0x38483800, // 160
		0x20400060, 0x20207000, // 161
		0x10200030, 0x48483000, // 162
		0x10200048, 0x48483800, // 163
		0x28500070, 0x48484800, // 164
		0x34580064, 0x544C4400, // 165
		0x00300838, 0x48380078, // 166
		0x00304848, 0x48300078, // 167
		0x10001020, 0x40443800, // 168
		0x00000000, 0x1E101000, // 169
		0x00000000, 0x78080800, // 170
		0x42444816, 0x21420700, // 171
		0x42444816, 0x2A4F0200, // 172
		0x00400040, 0x40404040, // 173
		0x00122448, 0x24120000, // 174
		0x00482412, 0x24480000, // 175
		0x28500030, 0x08783800, // 176
		0x28500030, 0x48483000, // 177
		0x1D22262A, 0x32225C00, // 178
		0x00001A24, 0x3C245800, // 179
		0x00003E49, 0x4F483E00, // 180
		0x3F48484E, 0x48483F00, // 181
		0x10081028, 0x447C4400, // 182
		0x34581028, 0x447C4400, // 183
		0x34580038, 0x44443800, // 184
		0x24000000, 0x00000000, // 185
		0x10204000, 0x00000000, // 186
		0x20702020, 0x00000000, // 187
		0x3A4A4A4A, 0x3A0A0A0A, // 188
		0x3C4299A1, 0xA199423C, // 189
		0x3C42B9A5, 0xB9A5423C, // 190
		0xEA4E4A4A, 0x00000000, // 191
		0x24006424, 0x24740418, // 192
		0x74242424, 0x24740418, // 193
		0x00001038, 0x7C101010, // 194
		0x1010107C, 0x38100000, // 195
		0x001018FC, 0x18100000, // 196
		0x0008183F, 0x18080000, // 197
		0x1010101F, 0x00000000, // 198
		0x000000F0, 0x10101010, // 199
		0x101010F0, 0x00000000, // 200
		0x0000001F, 0x10101010, // 201
		0x000000FF, 0x00000000, // 202
		0x10101010, 0x10101010, // 203
		0x101010FF, 0x10101010, // 204
		0x1010101F, 0x10101010, // 205
		0x000000FF, 0x10101010, // 206
		0x101010F0, 0x10101010, // 207
		0x101010FF, 0x00000000, // 208
		0x0010181C, 0x1C181000, // 209
		0x00081838, 0x38180800, // 210
		0x0024343C, 0x3C342400, // 211
		0x00242C3C, 0x3C2C2400, // 212
		0x00486C7E, 0x7E6C4800, // 213
		0x0012367E, 0x7E361200, // 214
		0x0010387C, 0x007C0000, // 215
		0x007C7C7C, 0x7C7C0000, // 216
		0x00387C7C, 0x7C380000, // 217
		0x3C428181, 0x82503810, // 218
		0x10549282, 0x82443800, // 219
		0x00040404, 0x247C2000, // 220
		0x06091C22, 0x221C4830, // 221
		0x00001028, 0x44000000, // 222
		0x00364949, 0x36000000, // 223
		0x0000324C, 0x484C3200, // 224
		0x18244478, 0x44447840, // 225
		0x7C242020, 0x20207000, // 226
		0x00013E54, 0x14141400, // 227
		0x7E221008, 0x10227E00, // 228
		0x001C3048, 0x48483000, // 229
		0x00002424, 0x24243A40, // 230
		0x00043850, 0x10101000, // 231
		0x38103844, 0x44381038, // 232
		0x0038447C, 0x44443800, // 233
		0x00384444, 0x44286C00, // 234 
		0x30201038, 0x44443800, // 235
		0x04083854, 0x54382040, // 236
		0x10385454, 0x54381000, // 237
		0x3C60407C, 0x40603C00, // 238
		0x386C4444, 0x44444400, // 239
		0x007C007C, 0x007C0000, // 240
		0x0010107C, 0x1010007C, // 241
		0x00201008, 0x1020007C, // 242
		0x00081020, 0x1008007C, // 243
		0x06090808, 0x08080808, // 244
		0x08080808, 0x08084830, // 245
		0x0010007C, 0x00100000, // 246
		0x00324C00, 0x324C0000, // 247
		0x30484830, 0x00000000, // 248
		0x30787830, 0x00000000, // 249
		0x00000000, 0x30300000, // 250
		0x00060808, 0x68281000, // 251
		0x30484848, 0x00000000, // 252
		0x30481020, 0x78000000, // 253
		0x70083008, 0x70000000, // 254 
		0xFE000000, 0x00000000, // 255 
		0x00000000, 0x00000000	// 256
	};

#ifdef __cplusplus
}
#endif

#endif
