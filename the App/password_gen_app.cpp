#include <iostream>
#include <conio.h>

//<--------------------Color Scheme-------------------->
#define WHITE "\033[38;5;15m"
#define RED "\033[38;5;1m"
#define CYAN "\033[38;5;14m"
#define GREEN "\033[38;5;10m"
#define RED_BG "\033[48;5;1m"
#define RESET_COLOR "\033[0m"
//<---------------------------------------------------->

int main()
{
    bool end = false;
    bool password_was_generated = false;
    int active_selection = 0;

    do
    {
        system("cls");

        std::cout << RED << "______                                   _   _____                           _             \n" << RESET_COLOR;
        std::cout << RED << "| ___ \\                                 | | |  __ \\                         | |            \n" << RESET_COLOR;
        std::cout << RED << "| |_/ /_ _ ___ _____      _____  _ __ __| | | |  \\/ ___ _ __   ___ _ __ __ _| |_ ___  _ __ \n" << RESET_COLOR;
        std::cout << RED << "|  __/ _` / __/ __\\ \\ /\\ / / _ \\| '__/ _` | | | __ / _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\| '__|\n" << RESET_COLOR;
        std::cout << RED << "| | | (_| \\__ \\__ \\\\ V  V / (_) | | | (_| | | |_\\ \\  __/ | | |  __/ | | (_| | || (_) | |   \n" << RESET_COLOR;
        std::cout << RED << "\\_|  \\__,_|___/___/ \\_/\\_/ \\___/|_|  \\__,_|  \\____/\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|   " << RESET_COLOR;
        std::cout << CYAN << " v1.0" << RESET_COLOR;;
        std::cout << "                                                                                          \n";

        if (active_selection == 0) {
            std::cout << GREEN << ">Begin\n" << RESET_COLOR;
            std::cout << GREEN << " Help\n" << RESET_COLOR;
        }
        else {
            std::cout << GREEN << " Begin\n" << RESET_COLOR;
            std::cout << GREEN << ">Help\n" << RESET_COLOR;
        }


        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        std::cout << WHITE RED_BG << "Move Up: ^                Move Down: v                Confirm: enter               Quit: q" << RESET_COLOR;

        //<--------------------Functional Code-------------------->
        char key = _getch();    //keyboard input

        if (key == 72 && active_selection != 0) {
            active_selection = 0;
        }
        else if (key == 80 && active_selection != 1) {
            active_selection = 1;
        }

        if (key == 'q' || password_was_generated) end = true;
        //<------------------------------------------------------->

    } while (!end);
    
    return 0;
}

//ASCII art generator -> http://patorjk.com/software/taag/