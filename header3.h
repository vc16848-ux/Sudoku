class Board {
public:
    Board();
    ~Board();
    void print();
    bool isValidMove(int row, int col, int number);
    void placeNumber(int row, int col, int number);
    bool isComplete(); 

private:
    Grid grid{};
};

class Player {
public:
    Player(); //mistakes_=mistakes;
    ~Player();
    int get_Mistakes(int mistakes);
    void getMove(int& row, int& col, int& number);//update mistakes
   bool pass(int& row, int& col, int& number); 
   

private:
    int mistakes_;
};


using Grid = std::array<std::array<int, 9>, 9>;

class Puzzle {
public:
	Puzzle();//setting initial puzzles & sols to them & original array
	~Puzzle();
void displaySol();
Grid get_Puzzle();//display board with correct level
void set_Level(int level);
            void set_Original(); 


private:
	int level_;
	std::array<std::array<bool, 9>, 9> original{};
Grid puzzle1{};
Grid puzzle2{};
Grid puzzle3{};

Grid sol1{};
Grid sol2{};
Grid sol3{};
};
