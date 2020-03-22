#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct vector3 Vector3;

Vector3 new_vector(double x, double y, double z);
Vector3 vec_mult(Vector3 v1, Vector3 v2);
Vector3 vec_mult1(Vector3 v, double m);
Vector3 vec_add(Vector3 v1, Vector3 v2);
Vector3 vec_add1(Vector3 v, double m);
Vector3 vec_sub(Vector3 v1, Vector3 v2);
double vec_norm(Vector3 v);
Vector3 vec_normalized(Vector3 v);
double vec_dot(Vector3 v1, Vector3 v2);
Vector3 vec_reflect(Vector3 v, Vector3 normal);