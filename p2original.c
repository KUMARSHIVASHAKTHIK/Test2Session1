#include<stdio.h>
#include<math.h>

struct_point
{
  float x, y;
}
typedef Point;

struct _line
{
  Point p1, p2;
  float distance;
}
typedef Line;

Point input_point()
{
  Point p1;
  printf("enter the values of x and y\n");
  scanf("%f%f",&p1.x,&p1.y);
  return p1;
}

Line input_line()
{
  Line l;
  Point p1, p2;
  p1 = input_point();
  p2 = input_point();
  l.p1 = p1;
  l.p2 = p2;
  return l;
}

void find_length(Line *l)
{
  l->distance=sqrt(pow((l->p2.x - l->p1.x),2)+pow((l->p2.y-l->p1.y),2));
}

void output(Line *l)
{
  printf("the distance between the points %f,%f  %f,%f is %f\n",l -> p1.x, l -> p1.y, l -> p2.x, l -> p2.y, l -> distance);
}

int main()
{
  Point p1, p2;
  Line l;
  l = input_line();
  find_length(&l);
  output(&l);
  return 0;
}