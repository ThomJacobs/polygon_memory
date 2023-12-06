#include "memory_pool.h"
#include <assert.h>
#include <iostream>

// Constructor:
polygon::MemoryPool::MemoryPool(Uint32 pSizeOfInstance, Uint32 pNumberOfInstances) : mNumberOfInstances(pNumberOfInstances), mInstanceSize(pSizeOfInstance)
{
	assert(pSizeOfInstance > POLYGON_NULL && "MemoryPool: Error, pSizeOfInstance must be larger than zero.");
	mStart = new Char32[pSizeOfInstance * pNumberOfInstances];
}

// Methods:
polygon::Char32* polygon::MemoryPool::GetNewInstance()
{
	if (mCurrent >= mNumberOfInstances * mInstanceSize) { return new Char32[mInstanceSize]; }
	Char32* data = &mStart[mCurrent];
	mCurrent += mInstanceSize;
	return data;
}

// Destructor:
polygon::MemoryPool::~MemoryPool()
{

}