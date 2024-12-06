#include <iostream>

int main() {
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    std::cout << "Время начала использования (час, минуты, сек) ";
    std::cin >> startHours >> startMinutes >> startSeconds;

    std::cout << "Время конца использования (час, мин, сек) ";
    std::cin >> endHours >> endMinutes >> endSeconds;

    int startTimeInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTimeInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    if (durationInSeconds < 0) {
        std::cout << "ошибка" << std::endl;
        return 1;
    }

    int durationInMinutes = (durationInSeconds + 59) / 60;

    int cost = durationInMinutes * 2;

    std::cout << "время поездки " << durationInMinutes << "минут" << std::endl;
    std::cout << "Стоимость поезки " << cost << " гривень " << std::endl;

    return 0;
}
