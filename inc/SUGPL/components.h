#include "types.h"

typedef struct {
    Vector2D position;
    Vector2D velocity;
    Vector2D acceleration;
} Transform;

typedef struct  {
    Vector2D position;
    float radius;
    _Bool trigger;
} circleCollider; 

typedef struct {
    Vector2D position;
    Vector2D size;
    _Bool trigger;
} boxCollider;

typedef struct {
    Vector2D pOnePosition;
    Vector2D pTwoPosition;
    _Bool trigger;
} lineCollider;