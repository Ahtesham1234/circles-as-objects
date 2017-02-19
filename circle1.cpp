//circle1.cpp
// circles as graphic objects
#include "msoftcon.h"     // for graphics function use.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
class circle                    //circle graphic
{
protected:
int xCo, yCo:      //colors
int radius;
color fillcolor;  // fill with the color
fstyle fillstyle;  //fill space

public: 
void set(int x, int y, int r, color fc, fstyle fs)
{
xCo = x;
yCo = y;
radius = r;
fillcolor = fc;
fillstyle = fs;
}
void draw()   //draws the circles
{
set_color(fillcolor);     //setcolor
set_fill_style(fillstyle);       //setfill
draw_circle(xCo , yCo, radius); // draw solid circle
}
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
init_graphics();    //initialize graphic system

circle c1;
circle c2;
circle c3;

c1.set(15,7,5,cBlue, X_FILL);
c2.set(41,12,7,cRED ,O_FILL);
c3.set(65 , 4, cGREEN , MEDIUM_FILL);

c1.draw();                     //now draw all the circle
c2.draw();
c3.draw();

set_cursor_pos(1,25);     //lower left corner
return 0;

}
