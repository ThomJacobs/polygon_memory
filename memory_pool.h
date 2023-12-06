#ifndef POLYGON_MEMORY_POOL_H
#define POLYGON_MEMORY_POOL_H

// Includes:
#include "../polygon_mathematics/type_definitions.h"

namespace polygon
{
	class MemoryPool
	{
	private:
		// Attributes:
		Uint32 mInstanceSize { POLYGON_NULL };
		Uint32 mNumberOfInstances { POLYGON_NULL };
		Uint32 mCurrent{ POLYGON_NULL };
		Char32* mStart { nullptr };

	public:
		// Constructor:
		MemoryPool(Uint32 pInstanceSize, Uint32 pNumberOfInstances);

		// Methods:
		Char32* GetNewInstance();

		// Destructor:
		~MemoryPool();
	};
}

#endif // !POLYGON_MEMORY_POOL_H