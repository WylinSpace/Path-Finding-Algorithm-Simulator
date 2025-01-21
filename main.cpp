#include "main.hpp"

class map
{   
    private:
    int positionX,positionY;
    string filename = "map.csv";
    string DynamicMap[dimensionY][dimensionX] = {
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
        {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "}
    };

    public:
    void print(){
            cout<< ITALIC << "     0 1 2 3 4 5 6 7 8 9 1011121314151617181920212223242526272829" << RESET << endl;
            cout<<"   ┌";
            for(int i=0;i<dimensionX*2+1;i++){
                cout<<"─";
            }
            cout<<"┐"<<endl;
            for(int i=0;i<dimensionX;i++){
                if(i<10){
                    cout<<ITALIC<<i<<RESET<<"  │ ";
                } else {
                    cout<<ITALIC<<i<<RESET<<" │ ";
                }
                for(int j=0;j<dimensionX;j++){
                    string cell = DynamicMap[i][j];
                    if(cell=="S"||cell=="E"){
                        cout << BOLD << GREEN << cell << RESET << RESET << " ";
                    } else if (cell=="X"){
                        cout << BOLD << RED << cell << RESET << RESET << " ";
                    } else if(i<dimensionY&& j==0){
                        cout << cell << " ";
                    } else {
                        cout << cell << " ";
                    }
                }
                cout<<"│"<<endl;
            }
            cout<<"   └";
            for(int i=0;i<dimensionX*2+1;i++){
                cout<<"─";
            }
            cout<<"┘"<<endl;
    }

    void installMap(){
        ofstream outfile(filename,ios::out);
        string line;
        for(int i=0;i<dimensionY;i++){
            if(i<dimensionY-1){
                outfile << OriginalMap[i] << endl;
            } else {
                outfile << OriginalMap[i];
            }
        }
        outfile.close();
        ifstream infile(filename);
        string row;
        if(infile.is_open()){
            string line;
            stringstream ss;
            int lineCount = 0;
            while(getline(infile,line)){
                if(lineCount<dimensionY){
                    string cell;
                    int column = 0;
                    ss.clear();
                    ss.str(line);
                    while(getline(ss,cell,',')){
                        if(column<dimensionX){
                            DynamicMap[lineCount][column] = cell;
                            column++;
                        }
                    }
                    lineCount++;
                }
            }
        }
    }

    void giveCoordinate(string Target){
        for(int i = 0;i<dimensionY;i++){
            for(int j = 0;j<dimensionX;j++){
                if(DynamicMap[i][j]==Target){
                    positionX=j;
                    positionY=i;    
                    return;
                }
            }
        }
    }

    bool movingLogic(string direction){
        if(direction=="Up"){
            if(DynamicMap[positionY-1][positionX]=="X"){return false;
            } else {return true;}}
        else if(direction=="UpperLeft"){
            if(DynamicMap[positionY-1][positionX-1]=="X"){return false;
            } else {return true;}}
        else if(direction=="UpperRight"){
            if(DynamicMap[positionY-1][positionX+1]=="X"){return false;
            } else {return true;}}
        else if(direction=="Left"){
            if(DynamicMap[positionY][positionX-1]=="X"){return false;
            } else {return true;}}
        else if(direction=="Right"){
            if(DynamicMap[positionY][positionX+1]=="X"){return false;
            } else {return true;}}
        else if(direction=="Lower"){
            if(DynamicMap[positionY+1][positionX]=="X"){return false;
            } else {return true;}}
        else if(direction=="LowerLeft"){
            if(DynamicMap[positionY+1][positionX-1]=="X"){return false;
            } else {return true;}}
        else if(direction=="LowerRight"){
            if(DynamicMap[positionY+1][positionX+1]=="X"){return false;
            } else {return true;}}
        else { return false; }
    }
    
    bool withinMatrix(){
        if(positionX>=0 && positionY>=0 && positionX<dimensionX && positionY<dimensionY){
            return true;
        } else {
            return false;
        }
    }

    string InttoStrForDirection(int directionInt){
        string direction;
        switch(directionInt){
            case 1:
            direction = "LowerLeft";
            break;
            case 2:
            direction = "Lower";
            break;
            case 3:
            direction = "LowerRight";
            break;
            case 4:
            direction = "Left";
            break;
            case 6:
            direction = "Right";
            break;
            case 7:
            direction = "UpperLeft";
            break;
            case 8:
            direction = "Up";
            break;
            case 9:
            direction = "UpperRight";
            break;
            default:
            direction = "None";
        }
        return direction;
    }

    void control(int directionInt){
        string direction = InttoStrForDirection(directionInt);
        giveCoordinate("S");
        if(direction=="Up"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY-1][positionX]);
                    positionY--;
                }
            }
            print();
        } else if (direction=="UpperLeft"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY-1][positionX-1]);
                    positionY--;
                    positionX--;
                }
            }
            print();
        } else if (direction=="UpperRight"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY-1][positionX+1]);
                    positionY--;
                    positionX++;
                }
            }
            print();
        } else if (direction=="Left"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY][positionX-1]);
                    positionX--;
                }
            }
            print();
        } else if (direction=="Right"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY][positionX+1]);
                    positionX++;
                }
            }
            print();
        } else if (direction=="Lower"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY+1][positionX]);
                    positionY++;
                }
            }
            print();
        } else if (direction=="LowerLeft"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY+1][positionX-1]);
                    positionY++;
                    positionX--;
                }
            }
            print();
        } else if (direction=="LowerRight"){
            if(withinMatrix() && movingLogic(direction)){
                for(int i=0;i<1;i++){
                    swap(DynamicMap[positionY][positionX],DynamicMap[positionY+1][positionX+1]);
                    positionY++;
                    positionX++;
                }
            }
            print();
        }
    }

    vector<vector<string>> getDynamicMap() {
        vector<vector<string>> result(dimensionY, vector<string>(dimensionX));
        for (int i = 0; i < dimensionY; i++) {
            for (int j = 0; j < dimensionX; j++) {
                result[i][j] = DynamicMap[i][j];
            }
        }
        return result;
    }

};

class algorithm {
    private:
    vector<pair<int, int>> directions = {
        {0, 1}, {1, 0}, {0, -1}, {-1, 0},
        {-1, -1}, {1, 1}, {-1, 1}, {1, -1}
    };
    vector<int> directionCodes = {1, 2, 3, 4, 6, 7, 8, 9};
    vector<vector<bool>> visited;
    vector<vector<string>> mapData;
    pair<int, int> start;
    pair<int, int> end;
    int rows = dimensionY;
    int cols = dimensionX;

    public:
    algorithm(vector<vector<string>> mapInput) {
        mapData = mapInput;
        visited = vector<vector<bool>>(rows, vector<bool>(cols, false));
        locatePoints();
    }

    void locatePoints() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (mapData[i][j] == "S") {
                    start = {i, j};
                } else if (mapData[i][j] == "E") {
                    end = {i, j};
                }
            }
        }
    }

    bool isValid(int x, int y) {
        return x >= 0 && x < rows && y >= 0 && y < cols && mapData[x][y] != "X" && !visited[x][y];
    }

    void resetVisited() {
        for (auto &row : visited) {
            fill(row.begin(), row.end(), false);
        }
    }

    vector<pair<int, int>> findShortestPath() {
        queue<pair<int, int>> q;
        vector<vector<pair<int, int>>> parent(rows, vector<pair<int, int>>(cols, {-1, -1}));
        visited[start.first][start.second] = true;
        q.push(start);

        while (!q.empty()) {
            auto current = q.front();
            q.pop();

            if (current == end) {
                vector<pair<int, int>> path;
                pair<int, int> node = end;
                while (node != start) {
                    path.push_back(node);
                    node = parent[node.first][node.second];
                }
                path.push_back(start);
                reverse(path.begin(), path.end());

                return path;  // Return the path
            }

            for (auto dir : directions) {
                int newX = current.first + dir.first;
                int newY = current.second + dir.second;

                if (isValid(newX, newY)) {
                    visited[newX][newY] = true;
                    parent[newX][newY] = current;
                    q.push({newX, newY});
                }
            }
        }

        cout << "No valid path found." << endl;
        return {};  // Return an empty path if no valid path is found
    }

    // This function will map the path into movement codes
    vector<int> getMovementCodes() {
        vector<int> movementCodes;
        vector<pair<int, int>> path = findShortestPath();

        if (path.empty()) {
            cout << "No path found, so no movement codes." << endl;
            return movementCodes;
        }

        for (size_t i = 1; i < path.size(); ++i) {
            int x1 = path[i - 1].first, y1 = path[i - 1].second;
            int x2 = path[i].first, y2 = path[i].second;

            // Calculate the movement code for this step
            if (x2 == x1 && y2 == y1 + 1) {
                movementCodes.push_back(6); // Right
            } else if (x2 == x1 && y2 == y1 - 1) {
                movementCodes.push_back(4); // Left
            } else if (x2 == x1 - 1 && y2 == y1) {
                movementCodes.push_back(8); // Up
            } else if (x2 == x1 + 1 && y2 == y1) {
                movementCodes.push_back(2); // Down
            } else if (x2 == x1 - 1 && y2 == y1 - 1) {
                movementCodes.push_back(7); // Upper Left
            } else if (x2 == x1 - 1 && y2 == y1 + 1) {
                movementCodes.push_back(9); // Upper Right
            } else if (x2 == x1 + 1 && y2 == y1 - 1) {
                movementCodes.push_back(1); // Lower Left
            } else if (x2 == x1 + 1 && y2 == y1 + 1) {
                movementCodes.push_back(3); // Lower Right
            }
        }

        return movementCodes;
    }
};

class Package {
public:
    std::string id;
    int urgency;
    int weight;
    std::string description;

    // Constructor to initialize the package details
    Package(std::string id, int urgency, int weight, std::string description)
        : id(id), urgency(urgency), weight(weight), description(description) {}

    // Function to display package details
    void display() const {
        std::cout << "ID: " << id << ", Urgency: " << urgency
                  << ", Weight: " << weight << ", Description: " << description << std::endl;
    }
};

class PackageManager {
private:
    std::vector<Package> packages;

    // Function to read CSV file and store the data into a vector of Package objects
    void readCSV(const std::string& filename) {
        std::ifstream file(filename);
        std::string line;

        if (!file.is_open()) {
            std::cerr << "Error opening file!" << std::endl;
            return;
        }

        // Skip the header row
        std::getline(file, line);

        // Read each line from the CSV file
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string id, urgencyStr, weightStr, description;

            // Parse the CSV columns
            std::getline(ss, id, ',');
            std::getline(ss, urgencyStr, ',');
            std::getline(ss, weightStr, ',');
            std::getline(ss, description);

            // Convert urgency and weight to integers
            int urgency = std::stoi(urgencyStr);
            int weight = std::stoi(weightStr);

            // Create a new package and add it to the vector
            packages.push_back(Package(id, urgency, weight, description));
        }

        file.close();
    }

    // Comparison function to sort packages
    static bool comparePackages(const Package& p1, const Package& p2) {
        // Sort by urgency first (ascending), then by weight (ascending)
        if (p1.urgency == p2.urgency)
            return p1.weight < p2.weight;
        return p1.urgency < p2.urgency;
    }

    // Function to display the sorted packages
    void displaySortedPackages() const {
        std::cout << "Sorted Package List:\n";
        for (const auto& package : packages) {
            package.display();
        }
    }

public:
    // Public function to load the CSV, sort and display packages
    void processPackages(const std::string& filename) {
        // Step 1: Read data from CSV file
        readCSV(filename);

        // Step 2: Sort the packages based on urgency and weight
        std::sort(packages.begin(), packages.end(), comparePackages);

        // Step 3: Display the sorted packages
        displaySortedPackages();
    }
};

int main() {
    map myMap;
    int StartInput;
    int MovementControl;
    bool ContinueManualMode = true;
    bool isAutomated = false;  // Variable to track if we are in automated mode (using algorithm)

    cout << CLEAR_SCREEN << MOVE_CURSOR(0, 0);
    cout << "WHAT CAN BROWN DO FOR YOU?" << endl;
    myMap.print();  // Print the initial map
    cout << "Click 1 to Start (Manual Control), 2 for Automated Control, 3 for Parcel Sorting (Pathfinding)> ";
    cin >> StartInput;

    if (StartInput == 1) {
        myMap.installMap();  // Install the map from the file
        cout << CLEAR_SCREEN << MOVE_CURSOR(1, 0);
        cout << "WHAT CAN BROWN DO FOR YOU? (MANUAL MODE)" << endl;
        myMap.print();  // Print the initial map

        // Manual control loop
        do {
            cout << "Enter The Next Movement > ";
            cin >> MovementControl;

            if (MovementControl == 0) {
                break;  // Exit if the user enters 0
            } else if (!myMap.withinMatrix()) {
                break;  // Exit if out of bounds
            }

            cout << CLEAR_SCREEN << MOVE_CURSOR(0, 0);
            cout << "WHAT CAN BROWN DO FOR YOU? (MANUAL MODE)" << endl;
            myMap.control(MovementControl);  // Perform the movement
        } while (ContinueManualMode);

    } else if (StartInput == 2) {
        // Automated pathfinding mode (using the algorithm class)
        myMap.installMap();  // Install the map from the file
        algorithm algo(myMap.getDynamicMap());  // Create an algorithm instance with the map

        // Get the series of movement codes for the shortest path
        vector<int> movementCodes = algo.getMovementCodes();

        cout << CLEAR_SCREEN << MOVE_CURSOR(0, 0);
        cout << "Automated Pathfinding (using shortest path)" << endl;
        myMap.print();  // Print the initial map

        // Loop through the movement codes and input them into the control function
        for (int code : movementCodes) {
            myMap.control(code);  // Perform the movement
            cout << CLEAR_SCREEN << MOVE_CURSOR(0, 0);
            myMap.print();  // Print the updated map

            // Add a pause to see the simulation step by step
            this_thread::sleep_for(chrono::milliseconds(500));  // Sleep for 500 milliseconds (adjust as needed)
        }

    } else if(StartInput==3){
        PackageManager manager;
        string filename = "parcel.csv";
        manager.processPackages(filename);
        return 0;
    
    } else {
        return 0;  // Exit if neither option is chosen
    }

    return 0;
}