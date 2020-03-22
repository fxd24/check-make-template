#include "../include/vec.h"

struct vector3
{
    double x, y, z;
};

Vector3 new_vector(double x, double y, double z)
{
    Vector3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

Vector3 vec_mult(Vector3 v1, Vector3 v2)
{
    return new_vector(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
}

Vector3 vec_mult1(Vector3 v, double m)
{
    return new_vector(v.x * m, v.y * m, v.z * m);
}

Vector3 vec_add(Vector3 v1, Vector3 v2)
{
    return new_vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

Vector3 vec_add1(Vector3 v, double m)
{
    return new_vector(v.x + m, v.y + m, v.z + m);
}

Vector3 vec_sub(Vector3 v1, Vector3 v2)
{
    return new_vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

double vec_norm(Vector3 v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

Vector3 vec_normalized(Vector3 v)
{
    double norm = vec_norm(v);
    return vec_mult1(v, 1 / norm);
}

double vec_dot(Vector3 v1, Vector3 v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3 vec_reflect(Vector3 v, Vector3 normal)
{
    return vec_sub(v, vec_mult1(vec_mult1(normal, vec_dot(v, normal)), 2));
}

