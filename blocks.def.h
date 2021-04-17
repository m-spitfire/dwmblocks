//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/      /*Update Interval*/    /*Update Signal*/
    {"",        "block-music",          0,                     11},
    {"",        "block-torrent",        20,                     7},
    {"",        "block-mem",            10,                     0},
    {"",        "block-cpu-temp",       10,                     0},
    {"",        "block-vol",            0,                     10},
    {"",        "block-battery",        5,                      0},
    {"",        "block-date",           60,                     0},
};
//block-backlight
//block-updates

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
