#ifndef POLYGON_CONCEPTS_HPP
#define POLYGON_CONCEPTS_HPP

// Includes:
#include "../polygon_mathematics/include.h"

namespace polygon
{
	/**
	*	Entity; a polygon minimilised rigidbody.
	* 
	*	For all objects to be simulated they must have:
	*		- Position.
	*		- Mass.
	*		- Direction.
	*		- Brief Collider.
	*		- Specific Collider.
	*/

	struct Entity
	{
	public:
		// Attributes:
		Vector2 mPosition;

	};
}

#endif // !POLYGON_CONCEPTS_HPP