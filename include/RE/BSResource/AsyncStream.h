#pragma once

#include "RE/BSResource/StreamBase.h"


namespace RE
{
	namespace BSResource
	{
		class AsyncStream : public StreamBase
		{
		public:
			virtual ~AsyncStream() = default;	// 00

			// add
			virtual void	Unk_05(void);		// 05
			virtual void	Unk_06(void);		// 06
			virtual void	Unk_07(void);		// 07
			virtual void	Unk_08(void);		// 08
			virtual void	Unk_09(void);		// 09
			virtual void	Unk_0A(void);		// 0A


			// members
			UInt32	minPacketSize;	// 10
			UInt32	pad14;			// 14
		};
		STATIC_ASSERT(sizeof(AsyncStream) == 0x18);
	}
}