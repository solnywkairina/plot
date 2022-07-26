#include "easy_plot.hpp"

int main(int argc, char* argv[]) {
    easy_plot::init(&argc, argv);
	
    std::vector<double> x = {0,1,0,1,2,0,1};
    easy_plot::plot("X", x);

    // ставим красный цвет линии
    std::vector<double> y = {0,2,3,4,2,0,1};
    easy_plot::plot("Y", y, easy_plot::LineSpec(1,0,0));

	
    std::vector<double> x2 = {0,2,6,7,8,10,12};
    easy_plot::plot("XY", x2, y, easy_plot::LineSpec(1,1,0));

    easy_plot::WindowSpec wstyle; // тут можно настроить стиль графика (цвет фона и пр.)
    // выводим три графика в одном
    easy_plot::plot<double>("Y1Y2Y3", wstyle, 3, x, easy_plot::LineSpec(1,0,0), x2, easy_plot::LineSpec(1,0,1), y,     easy_plot::LineSpec(0,1,0));

    while(true) {
        std::this_thread::yield();
    }
    return 0;
}