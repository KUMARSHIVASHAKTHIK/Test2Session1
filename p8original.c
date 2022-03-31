struct _point
{
float x,y;
}
typedef Point;

struct _line
{
Point p1,p2;
float distance;
}
typedef Line;

struct _polygon
{
int n;
Line l[100];
float perimenter;
}
typedef Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides in Polygon\n");
  scanf("%d",&n);
  return n;
}

int input_polygon( int n, Polygon *p)
{
  *p->n = n;
}

Point input_coordinates()
{
  printf("Enter the x coordinate\n");
  scanf("%d",&p.x);
  printf("Enter the y coordinate\n");
  scanf("%d",&p.y);
}

Line input_line()
{
  
}

void input_n_lines(int n, Line l[n])
{}

void find_perimeter(Polygon *p)
{}

void output(Polygon p)
{
  printf("");
}

int main()
{
  return 0;
}