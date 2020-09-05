#define SAMPLES 35

float X[][64] = {
{0.0, 0.0, 5.0, 13.0, 9.0, 1.0, 0.0, 0.0, 0.0, 0.0, 13.0, 15.0, 10.0, 15.0, 5.0, 0.0, 0.0, 3.0, 15.0, 2.0, 0.0, 11.0, 8.0, 0.0, 0.0, 4.0, 12.0, 0.0, 0.0, 8.0, 8.0, 0.0, 0.0, 5.0, 8.0, 0.0, 0.0, 9.0, 8.0, 0.0, 0.0, 4.0, 11.0, 0.0, 1.0, 12.0, 7.0, 0.0, 0.0, 2.0, 14.0, 5.0, 10.0, 12.0, 0.0, 0.0, 0.0, 0.0, 6.0, 13.0, 10.0, 0.0, 0.0, 0.0},
{0,0,0,13,9,0,0,0,0,0,0,14,15,1,0,0,0,0,0,13,16,0,0,0,0,0,0,11,16,0,0,0,0,0,0,10,16,2,0,0,0,0,0,14,16,1,0,0,0,0,0,15,16,1,0,0,0,0,0,12,15,0,0,0},
{0,0,2,16,10,0,0,0,0,0,3,16,16,1,0,0,0,0,5,16,14,0,0,0,0,0,3,16,13,0,0,0,0,0,1,16,15,0,0,0,0,0,1,16,16,0,0,0,0,0,2,16,15,2,0,0,0,0,0,15,16,11,0,0},
{0,0,8,16,8,0,0,0,0,0,10,16,16,3,0,0,0,0,2,4,14,4,0,0,0,0,0,8,14,0,0,0,0,0,5,16,8,0,0,0,0,2,15,14,7,6,3,0,0,5,16,15,16,15,3,0,0,0,10,13,8,2,0,0},
{0,0,0,11,5,3,11,0,0,0,7,14,2,12,9,0,0,2,15,6,3,16,5,0,0,7,16,8,13,16,13,0,0,7,16,16,16,7,1,0,0,0,4,10,13,0,0,0,0,0,0,12,6,0,0,0,0,0,0,12,0,0,0,0},
{0,0,4,16,16,4,0,0,0,0,12,11,7,11,0,0,0,0,9,2,5,12,0,0,0,0,0,0,7,11,0,0,0,0,0,0,13,6,0,0,0,0,0,2,16,1,0,0,0,0,1,15,15,10,1,0,0,0,5,16,8,11,11,0},
{0,0,3,10,12,12,2,0,0,1,13,12,6,13,8,0,0,8,16,8,8,14,1,0,0,5,14,16,16,3,0,0,0,0,12,16,15,2,0,0,0,3,16,2,15,10,0,0,0,4,16,8,12,12,0,0,0,0,9,16,15,3,0,0},
{0,0,13,14,10,2,0,0,0,0,6,16,16,16,0,0,0,0,0,16,16,16,4,0,0,0,4,16,16,14,2,0,0,0,8,16,16,7,0,0,0,3,15,16,16,4,0,0,0,1,16,16,14,1,0,0,0,0,14,16,13,3,0,0},
{0,0,0,0,3,15,6,0,0,0,0,0,11,16,7,0,0,0,0,9,16,16,4,0,0,0,10,16,16,16,4,0,0,4,16,7,8,16,4,0,0,1,4,0,10,16,2,0,0,0,0,0,7,16,1,0,0,0,0,0,3,16,1,0},
{0,1,7,15,16,16,14,0,0,10,16,11,6,3,1,0,0,7,16,16,12,0,0,0,0,8,16,12,16,4,0,0,0,1,4,0,13,8,0,0,0,0,0,0,15,8,0,0,0,0,0,7,16,2,0,0,0,0,13,15,5,0,0,0},
{0,0,0,13,8,0,0,0,0,0,2,15,1,0,0,0,0,0,11,10,0,8,2,0,0,4,16,5,11,16,8,0,0,7,16,16,16,16,3,0,0,2,13,9,16,12,0,0,0,0,0,7,16,6,0,0,0,0,0,13,15,1,0,0},
{0,0,7,16,13,2,0,0,0,0,14,15,13,9,0,0,0,0,14,8,9,10,0,0,0,0,1,2,9,12,0,0,0,0,0,0,13,8,0,0,0,0,0,5,16,4,0,0,0,0,6,15,16,5,5,5,0,0,6,16,16,16,16,13},
{0,0,4,12,13,2,0,0,0,0,5,16,16,5,0,0,0,0,5,16,16,6,0,0,0,0,9,16,15,0,0,0,0,0,10,16,14,0,0,0,0,0,12,16,12,0,0,0,0,0,5,16,11,0,0,0,0,0,6,16,13,0,0,0},
{0,0,0,14,8,0,0,0,0,0,3,16,3,0,0,0,0,0,12,9,9,7,0,0,0,6,15,1,14,11,6,0,0,13,14,8,16,16,7,0,0,8,16,16,16,3,0,0,0,0,1,11,14,0,0,0,0,0,0,14,14,0,0,0},
{0,0,3,13,13,3,0,0,0,2,14,12,12,11,0,0,0,4,16,8,5,15,3,0,0,1,13,14,16,7,0,0,0,0,11,16,13,1,0,0,0,1,16,12,13,14,1,0,0,0,13,13,9,16,7,0,0,0,3,13,16,10,1,0},
{0,0,3,11,16,15,0,0,0,0,15,16,5,13,0,0,0,2,16,9,0,12,0,0,0,1,9,15,10,10,0,0,0,0,0,6,16,12,1,0,0,0,2,14,2,16,5,0,0,0,8,10,1,14,4,0,0,0,3,15,16,9,0,0},
{0,1,13,16,15,5,0,0,0,4,16,7,14,12,0,0,0,3,12,2,11,10,0,0,0,0,0,0,14,8,0,0,0,0,0,3,16,4,0,0,0,0,1,11,13,0,0,0,0,0,9,16,14,16,7,0,0,1,16,16,15,12,5,0},
{0,7,16,16,16,11,2,0,0,5,16,12,8,6,1,0,0,9,16,1,0,0,0,0,0,2,16,15,3,0,0,0,0,0,5,16,14,1,0,0,0,0,0,2,16,10,0,0,0,1,7,13,16,3,0,0,0,4,15,16,6,0,0,0},
{0,0,1,14,6,0,0,0,0,0,7,15,1,0,0,0,0,0,13,7,0,0,0,0,0,0,13,5,0,0,0,0,0,0,14,7,5,4,1,0,0,0,10,16,13,14,14,0,0,0,9,14,1,4,16,3,0,0,1,12,13,16,9,1},
{0,0,13,10,1,0,0,0,0,5,16,14,7,0,0,0,0,4,16,8,14,0,0,0,0,2,14,16,16,6,0,0,0,0,1,4,9,13,1,0,0,0,0,0,0,13,6,0,0,0,5,8,5,9,14,0,0,0,13,13,15,16,13,0},
{0,0,15,13,0,3,3,0,0,0,15,15,8,15,5,0,0,0,8,16,16,7,0,0,0,0,7,16,16,1,0,0,0,0,12,12,15,10,0,0,0,3,16,0,10,15,1,0,0,2,16,5,7,15,3,0,0,1,12,16,15,7,0,0},
{0,0,1,14,14,2,0,0,0,0,1,14,16,3,0,0,0,0,0,10,16,2,0,0,0,0,0,11,16,5,0,0,0,0,0,15,16,5,0,0,0,0,0,15,16,5,0,0,0,0,0,10,16,12,1,0,0,0,0,14,16,11,0,0},
{0,0,4,13,16,16,7,0,0,0,15,10,7,16,1,0,0,7,12,0,12,7,0,0,0,9,5,3,16,2,0,0,0,2,11,16,16,12,7,0,0,5,10,16,12,8,3,0,0,0,3,15,2,0,0,0,0,0,6,14,0,0,0,0},
{0,0,0,2,15,2,0,0,0,0,0,12,12,0,0,0,0,0,5,16,2,0,0,0,0,0,11,10,0,3,8,0,0,5,16,1,2,15,5,0,0,9,13,7,14,16,2,0,0,5,15,14,16,10,0,0,0,0,0,2,16,5,0,0},
{0,0,8,13,14,5,0,0,0,5,13,4,11,9,0,0,0,4,13,1,12,14,0,0,0,0,8,14,11,12,4,0,0,0,0,0,0,7,8,0,0,0,0,0,0,4,8,0,0,0,2,2,0,11,7,0,0,0,8,16,16,13,2,0},
{0,0,0,6,16,2,0,0,0,0,2,15,15,0,0,0,0,0,15,16,3,2,3,0,0,7,16,7,3,15,11,0,0,7,16,14,14,16,5,0,0,1,7,12,16,10,0,0,0,0,0,7,16,4,0,0,0,0,0,10,15,0,0,0},
{0,0,10,16,14,6,0,0,0,0,16,8,6,16,3,0,0,0,9,5,0,13,6,0,0,0,0,0,0,14,8,0,0,0,0,0,4,16,2,0,0,0,0,0,13,11,0,0,0,0,2,9,16,10,6,1,0,0,12,16,14,13,16,8},
{0,0,0,3,13,7,0,0,0,0,1,14,11,0,0,0,0,0,12,12,1,2,3,0,0,7,16,4,1,15,10,0,0,10,14,0,7,16,8,0,0,15,16,16,16,16,1,0,0,4,11,11,15,11,0,0,0,0,0,2,15,4,0,0},
{0,0,3,16,4,0,0,0,0,0,12,13,2,5,0,0,0,2,16,6,10,15,1,0,0,9,15,3,16,11,7,0,0,12,16,16,15,11,5,0,0,3,9,16,3,0,0,0,0,0,2,16,3,0,0,0,0,0,6,14,0,0,0,0},
{0,0,0,10,15,1,0,0,0,0,5,16,16,10,0,0,0,0,14,6,6,15,0,0,0,4,16,4,0,15,3,0,0,5,15,5,0,11,5,0,0,0,12,11,0,13,5,0,0,0,8,16,16,16,3,0,0,0,1,8,13,8,0,0},
{0,5,16,13,1,0,0,0,0,9,14,14,4,0,0,0,0,9,7,12,4,0,0,0,0,0,0,13,4,0,0,0,0,0,2,16,1,0,0,0,0,0,7,13,0,0,0,0,0,1,15,16,16,16,11,0,0,5,16,14,10,8,6,0},
{0,0,0,8,7,0,0,0,0,0,4,16,11,0,0,0,0,0,9,16,1,0,0,0,0,0,11,14,11,13,2,0,0,0,13,16,14,14,10,0,0,0,10,15,1,5,13,0,0,0,6,16,8,14,12,0,0,0,0,5,14,16,4,0},
{0,0,0,11,16,8,0,0,0,0,6,16,13,3,0,0,0,0,8,16,8,0,0,0,0,0,13,16,2,0,0,0,0,0,15,16,5,0,0,0,0,2,16,16,16,5,0,0,0,1,10,16,16,14,0,0,0,0,0,12,16,15,0,0},
{0,0,1,12,16,16,12,0,0,0,7,16,11,12,9,0,0,0,6,7,0,14,4,0,0,0,0,0,6,16,3,0,0,0,0,10,16,16,9,0,0,0,0,8,15,5,0,0,0,0,0,8,10,0,0,0,0,0,0,16,5,0,0,0},
{0,0,3,15,16,16,12,0,0,0,12,12,7,16,6,0,0,4,12,0,9,13,0,0,0,0,1,1,13,7,0,0,0,0,8,13,16,16,6,0,0,0,12,15,12,6,1,0,0,0,0,15,5,0,0,0,0,0,3,16,2,0,0,0}
};

int y[] = {0, 1, 1, 2, 4, 2, 8, 1, 1, 5, 4, 2, 1, 4, 8, 8, 2, 5, 6, 9, 8, 1, 7, 4, 9, 4, 2, 4, 4, 0, 2, 6, 6, 7, 7};