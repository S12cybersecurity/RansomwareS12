#include <iostream>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

int banner(string text  ) {
    // Calculate the length of the text and the total width of the banner
    int textLength = text.length();
    int bannerWidth = textLength + 4; // Add 4 for the two asterisks on each side

    // Print the top border of the banner
    for (int i = 0; i < bannerWidth; i++) {
        printf("*");
    }

    // Print the sides and text of the banner
    printf("\n* %s *\n", text.c_str());

    // Print the bottom border of the banner
    for (int i = 0; i < bannerWidth; i++) {
        printf("*");
    }

    printf("\n");
    return 0;
}

