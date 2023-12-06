#include "archive.h"

#define ATTRIBUTE_SIZE 8

polygon::Archive::Archive(Uint32 pNumberOfRigidbodies)
{
	for (int i = 0; i < (Uint32)Rigidbody2D::NUMBER_OF_ATTRIBUTES; i++)
	{
		mRigidbodies[i] = new char[ATTRIBUTE_SIZE * pNumberOfRigidbodies];
	}

}