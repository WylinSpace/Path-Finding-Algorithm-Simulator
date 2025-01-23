#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <chrono>
#include <thread>
using namespace std;

//COLOR DEFINIITION
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

//TEXT STYLE
#define BOLD            "\033[1m"
#define ITALIC          "\033[3m"
#define UNDERLINE       "\033[4m"
#define STRIKETHROUGH   "\033[9m"

//CURSOR MOVEMENT
#define MOVE_CURSOR(row, col) "\033[" #row ";" #col "H"     // Move the cursor to a specific position (row, col)
#define CLEAR_SCREEN "\033[2J"                              // Clear the screen
#define CLEAR_TO_END "\033[0J"                              // Clear from cursor to end of screen
#define SAVE_CURSOR "\033[s"                                // Save the current cursor position
#define RESTORE_CURSOR "\033[u"                             // Restore the saved cursor position
#define HIDE_CURSOR "\033[?25l"                             // Hide the cursor
#define SHOW_CURSOR "\033[?25h"                             // Show the cursor

const int dimensionX = 30;
const int dimensionY = 30;

//MAP
const string OriginalMap[dimensionY] = {
/*  "S, , ,X, , , , , , ",
    " ,X, ,X, ,X, , , , ",
    " , , , , , ,X, , , ",
    " , , , , , , , , , ",
    "X,X, ,X, ,X, ,X, , ",
    " , , , , , , , , , ",
    "X,X,X,X,X, , , , , ",
    " , , , , , , , , , ",
    " ,E, , , ,X,X,X,X,X",
    " , , , , , , , , , "   */

/*  " , ,X,X, , , ,X, , ",
    " ,X, , , , , ,X, , ",
    " , , ,X, , , ,X, ,X",
    "X,X, , , , , ,X,X,X",
    " , ,X,X, , , ,X,X, ",
    " ,X, , , , , , , , ",
    " ,S, ,X,X, , , , , ",
    " , , ,X, , , ,E, , ",
    " , ,X,X, , , , , , ",
    " , , , ,X, ,X, , , "   */

/*" , , , , , , , , , ,X,X, , , , , ,X, ,X",
" , , , , , , , , ,X, , , ,X, ,X,X, , , ",
" ,X, ,X, , , , , ,X, , , , ,X, , , , , ",
" , , , , , , ,X, ,X,X, ,X, ,X,X, ,X,X, ",
" , , ,X, , , ,X, , , , ,X, ,X, , , , , ",
" , , ,X, , , , , , , , ,X,X, , , , , , ",
" , , , , ,X,X, , , ,X, ,X, , , ,X, , , ",
" , ,X,X, , , , , , , , , , , , , ,X, , ",
" , ,X,X,X,X, , ,X, , , ,X, ,X, , , , , ",
"X, ,X, , , , ,X,X, , , ,X, ,X, , , , , ",
" , ,E, , , , , , , ,X,X, , , , , , , , ",
" , , , , , , , , , , , , , , , , , , , ",
" , ,X, , , , , , , , , ,X, , ,X, ,X, , " ,
" ,X, ,X, ,X, , , , , , , , , , ,X, , , ",
" , , , , ,X, , , , , , , ,X,X, , ,X, , ",
" ,X, , , ,X, , , , , , ,X,X, , , , ,X, ",
" ,X,X,X, ,X, , ,X, ,X, , ,X, ,X, , , ,X",
"X, ,X,X, , , ,X, ,X, , , , , , ,X,X,X, ",
" , , ,X, , , ,X,S, , , , , , , , , , , ",
" ,X, , , , , , , , , , , ,X, , ,X, , , "*/

" , , , , , , , , , ,X,X, , , , , ,X, ,X, , , , , , ,X,X, , ",
" , ,E, , , , , , ,X, , , ,X, ,X,X, , , , , , , , , ,X,X, , ",
" ,X, ,X, , , , , ,X, , , , ,X, , , , , , , , , , , ,X,X, , ",
" , , , , , , ,X, ,X,X, ,X, ,X,X, ,X,X, , , , , , , ,X,X, , ",
" , , ,X, , , ,X, , , , ,X, ,X, , , , , , , , , , , ,X,X, , ",
" , , ,X, , , , , , , , ,X,X, , , , , , , , , ,X, , , , , , ",
" , , , , ,X,X, , , ,X, ,X, , , ,X, , , , , , ,X, , ,X, , , ",
" , ,X,X, , , , , , , , , , , , , ,X, , , , , , , , , , , , ",
" , ,X,X,X,X, , ,X, , , ,X, ,X, , , , , , , , ,X, , ,X, , , ",
"X, ,X, , , , ,X,X, , , ,X, ,X, , , , , , , , , , , ,X,X, , ",
" , , , , , , , , , ,X,X, , , , , , , , , , , ,X, , , , , , ",
" , , , , , , , , , , , , , , , , , , , , , , ,X, , , , , , ",
" , ,X, , , , , , , , , ,X, , ,X, ,X, , , , , ,X, , , , , , ",
" ,X, ,X, ,X, , , , , , , , , , ,X, , , , , , , , , , , , , ",
" , , , , ,X, , , , , , , ,X,X, , ,X, , , , , ,X, , , , , , ",
" ,X, , , ,X, , , , , , ,X,X, , , , ,X, , , , ,X, , , , , , ",
" ,X,X,X, ,X, , ,X, ,X, , ,X, ,X, , , , ,X, , ,X,X,X, , , , ",
"X, ,X,X, , , ,X, ,X, , , , , , ,X,X,X, , , , ,X, , ,X, , , ",
" , , ,X, , , ,X, , , , , , , , , , , , , , ,X, , , , ,X, , ",
" ,X, , , , , , , , , , , ,X, , ,X, , , , , , ,X, , , , , , ",
" , , , , , , , , , ,X,X, , , , , , , , , , , ,X, , , , , , ",
" , , , , , , , , , , , , , , , , , , , , , , ,X, , , , , , ",
" , ,X, , , , , , , , , ,X, , ,X, ,X, , , , , ,X, , , , , , ",
" ,X, ,X, ,X, , , , , , , , , , ,X, , , , , , , , , , , , , ",
" , , , , ,X, , , , , , , ,X,X, , ,X, , , , , ,X, , , , , , ",
" ,X, , , ,X, , , , , , ,X,X, , , , ,X, , , , ,X, , , , , , ",
" ,X,X,X, ,X, , ,X, ,X, , ,X, ,X, , , , ,X, , ,X,X,X, , , , ",
"X, ,X,X, , , ,X, ,X, , , , , , ,X,X,X, , , , ,X, , ,X, , , ",
" , , ,X, , , ,X,S, , , , , , , , , , , , , ,X, , , , ,X, , ",
" ,X, , , , , , , , , , , ,X, , ,X, , , , , , ,X, , , , , , ",
};