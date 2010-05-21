h56461
s 00000/00000/00061
d D 2.1 93/02/03 15:39:47 suprem45 2 1
c Iniital IV.GS release
e
s 00061/00000/00000
d D 1.1 93/02/03 15:38:31 suprem45 1 0
c date and time created 93/02/03 15:38:31 by suprem45
e
u
U
f e 0
t
T
I 1
    /* 
     * HP plotter definition - these are dependent on the
     * SPECIFIC MODEL of HP plotter used, and should always
     * be modified when going to a new plotter.
     * 
     * all dimensions are in plotter units.
     *
     * MINX and MINY are the smallest x and y values that
     * are inside the soft clip limits of the plotter
     * MAXX and MAXY are the largest x and y values that
     * are inside the soft clip limits of the plotter MINUS
     * MINX and MINY, so they give the dimension of the
     * soft clip area.
     *
     * PLOTTERTYPE is a character string which identifies the
     * plotter that should be used.  control information will
     * be read for ~cad/lib/technology/$TECHNOLOGY/$PLOTTERTYPE.map
     * and output will go to /usr/ucb/lpr -Pplt$PLOTTERTYPE
     *
     plotter.h 1.1
     */
#define PLOTTERTYPE "7550"
#define P1X 80
#define P1Y 320
#define P2X 10080
#define P2Y 7520
#define MAXX 10000
#define MAXY 7200

#define PLOTTERNAME "paper"

#define PENGRID 1
#define PENAXIS 2
#define TEXTCOLOR 1
#define PEN1 3
#define PEN2 4
#define PEN3 5 
#define PEN4 6
#define PEN5 7
#define PEN6 8
#define PEN7 2
#define PEN8 1

#define LINE1 2
#define LINE2 4
#define LINE3 5 
#define LINE4 6
#define LINE5 2
#define LINE6 4
#define LINE7 5
#define LINE8 6

#define MARK1 "L"
#define MARK2 "K"
#define MARK3 "M"
#define MARK4 "O"
#define MARK5 "G"
#define MARK6 "F"
#define MARK7 "E"
#define MARK8 "A"

E 1