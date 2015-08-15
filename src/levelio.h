#ifndef _LEVEL_IO_H_
#define _LEVEL_IO_H_

/* Defines interface for reading SYY3 levels from files. */

enum Colors { cRED, cGREEN, cBLUE, cYELLOW, cANY };

struct Level {
    struct Leon *leon;
    struct World *world;
    struct Fruits *fruits;
    struct Babies *babies;
};

struct Leon {
    int x, y, z, clr, len, babies;
};

struct World {
    int w, h, fx, fy, fz;
    char *lmap, *tmap;
};

struct Fruits {
    int len;
    struct Fruit *arr;
};

struct Fruit {
    int x, y, z, leaf, body, weight;
};

struct Babies {
    int len;
    struct Baby *arr;
};

struct Baby {
    int x, y, z;
};

int geti(int x, int y, int w);
struct Level *get_level(char *filename);
void free_level(struct Level *level);

#endif /* _LEVEL_IO_H_ */
