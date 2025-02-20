#ifndef IVEC_H
#define IVEC_H
#include "globaldef.h"

struct ivec
{
  int x, y, z;

  int operator==(ivec left)
  {
    if (x == left.x && y == left.y && z == left.z)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  int operator!=(ivec left)
  {
    if (x != left.x || y != left.y || z != left.z)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }

  ivec operator-(ivec left)
  {
    return {x - left.x, y - left.y, z - left.z};
  }

  ivec operator-(vec left)
  {
    return {x - int(left.x), y - int(left.y), z - int(left.z)};
  }

  ivec operator+(ivec left)
  {
    return {x + left.x, y + left.y, z + left.z};
  }

  ivec operator+(vec left)
  {
    return ivec{x + int(left.x), y + int(left.y), z + int(left.z)};
  }

  ivec operator/=(int left)
  {
    return ivec{x / left, y / left, z / left};
  }
  ivec operator*=(int left)
  {
    return ivec{x * left, y * left, z * left};
  }
  ivec operator%=(int left)
  {
    return ivec{x % left, y % left, z % left};
  }
};

struct ivec2
{
  int x, y;
};

ivec region_cord(vec worldpos);

vec ivec_to_vec(ivec left);
ivec vec_to_ivec(vec left);

int taxi_dist(ivec left, ivec right);

ivec index3d(int index1d, int cuberoot);
int index1d(ivec cord, int maxX, int maxY);

void moveCords(ivec *cords, ivec moveDir);

bool AABB(vec a, vec rangeMin, vec rangeMax);

void print_ivec(ivec n);
void print_vec(vec n);

#endif