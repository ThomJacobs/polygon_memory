#ifndef POLYGON_ARCHIVE_H
#define POLYGON_ARCHIVE_H

// Includes:
#include "../polygon_physics/include.h"
#include <vector>

namespace polygon
{
	/**
	*					 | Position | Mass | Velocity | FORCE | BRIEF COLLIDER | SPECIFIC COLLIDER | 
	*					 ---------------------------------------------------------------------------
	* Rigidbody Instance |	   0    |   0  |     0    |   0   |        0       |         0         |
	* Rigidbody Instance |	   1    |   1  |     1    |   1   |        1       |         1         |
	*/
	class Archive
	{
	private:
		// Attributes:
		Uint32 mNumberOfRigidbodies { POLYGON_NULL };
		Uint32 mNumberOfActiveRigidbodies { POLYGON_NULL };
		char* mRigidbodies[(Uint32)Rigidbody2D::NUMBER_OF_ATTRIBUTES];

	public:
		// Constructor:
		Archive(Uint32 pNumberOfRigidbodies);

		// Methods:
	};
}

#endif // !POLYGON_ARCHIVE_H