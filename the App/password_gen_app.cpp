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
    int menu_state = 0;
    int active_selection = 0;
    int number_of_characters = 3;

    do
    {
        if (menu_state == 0)
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
                std::cout << GREEN << " Credits\n" << RESET_COLOR;
            }
            else if (active_selection == 1) {
                std::cout << GREEN << " Begin\n" << RESET_COLOR;
                std::cout << GREEN << ">Help\n" << RESET_COLOR;
                std::cout << GREEN << " Credits\n" << RESET_COLOR;
            }
            else {
                std::cout << GREEN << " Begin\n" << RESET_COLOR;
                std::cout << GREEN << " Help\n" << RESET_COLOR;
                std::cout << GREEN << ">Credits\n" << RESET_COLOR;
            }


            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << WHITE RED_BG << "Move Up: ^                Move Down: v                Confirm: enter               Quit: q" << RESET_COLOR;

            //<--------------------Functional Code-------------------->
            char key = _getch();    //keyboard input

            //arrow-up
            if (key == 72) {
                if (active_selection > 0) {
                    active_selection--;
                }
            }else if (key == 80) {  //arrow-down
                if (active_selection <= 2) {
                    active_selection++;
                    if (active_selection > 2)
                    {
                        active_selection = 2;
                    }
                }
            }

            //enter key
            if (key == '\r') {
                if (active_selection == 0) {
                    menu_state = 12;
                }
                else if (active_selection == 1) {
                    menu_state = 1;
                }
                else if (active_selection == 2) {
                    menu_state = 2;
                }
            }

            if (key == 'q' || password_was_generated) end = true;
            key = 0;
            //<------------------------------------------------------->
        }
        else if (menu_state == 1) {
            system("cls");

            std::cout << "<---HELP SITE--->\n";
            std::cout << "\nThis application is used to create random long string as a password.\n";
            std::cout << "The app is open-source. Can be used for other distributions.";


            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << WHITE RED_BG << "Move Up: ^                Move Down: v                Confirm: enter               Back: q" << RESET_COLOR;

            //<--------------------Functional Code-------------------->
            char key = _getch();    //keyboard input

            if (key == 'q' || password_was_generated) menu_state = 0;
            key = 0;
            active_selection == 1;
            //<------------------------------------------------------->
        }
        else if (menu_state == 2) {
            system("cls");

            std::cout << "<---CREDITS SITE--->\n";

            std::cout << "\n@Jiri Martinek 2024.\nAll rights reserved.";

            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << WHITE RED_BG << "Move Up: ^                Move Down: v                Confirm: enter               Back: q" << RESET_COLOR;

            //<--------------------Functional Code-------------------->
            char key = _getch();    //keyboard input

            if (key == 'q' || password_was_generated) menu_state = 0;
            key = 0;
            active_selection == 1;
            //<------------------------------------------------------->
        }
        else if (menu_state == 12) {
            system("cls");

            std::cout << RED << "______                                   _   _____                           _             \n" << RESET_COLOR;
            std::cout << RED << "| ___ \\                                 | | |  __ \\                         | |            \n" << RESET_COLOR;
            std::cout << RED << "| |_/ /_ _ ___ _____      _____  _ __ __| | | |  \\/ ___ _ __   ___ _ __ __ _| |_ ___  _ __ \n" << RESET_COLOR;
            std::cout << RED << "|  __/ _` / __/ __\\ \\ /\\ / / _ \\| '__/ _` | | | __ / _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\| '__|\n" << RESET_COLOR;
            std::cout << RED << "| | | (_| \\__ \\__ \\\\ V  V / (_) | | | (_| | | |_\\ \\  __/ | | |  __/ | | (_| | || (_) | |   \n" << RESET_COLOR;
            std::cout << RED << "\\_|  \\__,_|___/___/ \\_/\\_/ \\___/|_|  \\__,_|  \\____/\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|   " << RESET_COLOR;
            std::cout << CYAN << " v1.0" << RESET_COLOR;;
            std::cout << "                                                                                          \n";

            std::cout << "<---SETTINGS--->\n";
            std::cout << WHITE << " Number of characters: " << number_of_characters << RESET_COLOR;


            std::cout << "\n\n\n";
            std::cout << WHITE RED_BG << "Move Up: ^                Move Down: v                Confirm: enter               Back: q" << RESET_COLOR;

            //<--------------------Functional Code-------------------->
            char key = _getch();    //keyboard input

            if (key == 72) {
                if (number_of_characters > 0) {
                    number_of_characters++;
                    if (number_of_characters > 32)
                    {
                        number_of_characters = 32;
                    }
                }
            }
            else if (key == 80) {  //arrow-down
                if (number_of_characters >= 3) {
                    number_of_characters--;
                    if (number_of_characters < 3)
                    {
                        number_of_characters = 3;
                    }
                }
            }

            if (key == 'q' || password_was_generated) menu_state = 0;
            key = 0;
            active_selection == 0;
            //<------------------------------------------------------->
        }


    } while (!end);

    return 0;
}

//ASCII art generator -> http://patorjk.com/software/taag/