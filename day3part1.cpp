

#include <iostream>
#include <string.h>

using namespace std;
const char *datos[] = {
"..##.......",
"#...#...#..",
".#....#..#.",
"..#.#...#.#",
".#...##..#.",
"..#.##.....",
".#.#.#....#",
".#........#",
"#.##...#...",
"#...##....#",
".#..#...#.#"};

// const char *datos[] = {
//     "...#...#..#....#..#...#..##..#.",
//     ".#..#.....#.#............###...",
//     ".#...###....#.............##..#",
//     "...##...##....#.....##..#.##...",
//     ".....###.#.###..##.#.##.......#",
//     "#...##.....#..........#..#.#.#.",
//     "......##.......##..#....#.#....",
//     "....#.###.##..#.#..##.##....#.#",
//     ".......#.......###.#.#.##.....#",
//     ".........#.#....#..........#.#.",
//     ".#...##.....##.........#..#....",
//     ".##....#.#.#...##......#.......",
//     "##.#.#..#....#....#....#...#.#.",
//     "##....#.#..##......#....##...#.",
//     "....#..#..##..#.###.......#.#..",
//     ".....##....###...........#.#.##",
//     "#.....##.........#....##......#",
//     "........###.#..#....#....#.....",
//     "...#.......#.##..#.###......#..",
//     "...............#..#....#.##....",
//     "..#..###..#.#..#.........##..#.",
//     "####..#..####..................",
//     "#...####...#.......#.#.#...#...",
//     "......###.....#......#..#..#...",
//     "#...#.....##.....#.#..##...#.#.",
//     "#...........##.......#.........",
//     ".#..#.........#.#..##....#.....",
//     "........##...#................#",
//     "........#.###.#.###.#.#.##..##.",
//     ".#....##.....#...##.#..#.#.....",
//     "..#..#.....###....##.#....#.#.#",
//     "#......##.##...##..#.........#.",
//     "#..#..#.....#.....#.........#..",
//     "#....#.#...###.........#...#...",
//     ".#.#.....##......#.#......#....",
//     "..##......##...#.#.#.#.........",
//     "..#......#.....##.###.#.#..#...",
//     "....#..#.......#..#..#.....#...",
//     ".#.#.....#...#..........#......",
//     "#.#..#...........#.#.##.#...#.#",
//     "..#.#....###...#...#.....#.#...",
//     "....##.#.###....####.......#...",
//     ".....##....#.......#..#..#....#",
//     "...##..#.#.#.#......#......#...",
//     "...##...#....#...#......###...#",
//     "........#..#.#.....#.###.......",
//     "..#..##.#....#.#.........#...#.",
//     ".....#.####....#.##.........#..",
//     "......#...#...#.....#......###.",
//     ".##.....#....#..#.#....#.....#.",
//     "...........#...#....##..#...#..",
//     ".....#....#.....#...##..#...#.#",
//     ".#...#.........#.......#...#..#",
//     "...#..#...#........#......#....",
//     "..#..#####.#.....#.#....#...#.#",
//     "...#.......#.#....#...##..#..#.",
//     "####..#.#.###.#.#..............",
//     ".##........#...#.#....#..#.....",
//     "..#..............#.#..##...#.##",
//     ".###.#.....#.#.....##.#......##",
//     "....###.....#...#...#.#..#.....",
//     "....###.#.##.......#....#...#..",
//     "#..#...#......##..#.....#.#...#",
//     "....#.#.........#..............",
//     "#.##.##...#..#.#.#.....#...#.##",
//     "#...#...#......#...........##..",
//     "#.#.#......#............#.#....",
//     ".#.#..######...#.#.........#.##",
//     "..#.#..#...#......#............",
//     "....#.....#......##..#.....#...",
//     ".##............#....##..#......",
//     ".#.#.#...#.##.............###.#",
//     "#.#...#...#.....#....#.#.#.....",
//     "........#..#......##.##.#.....#",
//     ".....#.....#.#####...#....#....",
//     ".#...#......#.........#.#......",
//     "...#...#..##.....##....#..#....",
//     "....#....##..#.........#.......",
//     "..#........##..#.#........#....",
//     "...#...##...........#...#....#.",
//     ".....##.........#..#....#..#.#.",
//     "#..#....##..#...##.....#..##.#.",
//     "..#.#.#.#...#...#.....#.#....#.",
//     ".......#.###...#.#.......#.#...",
//     "....#..#..#.###.#.....###..#.#.",
//     ".#..##......#..#..#....#.####..",
//     "..##...........#...#.........#.",
//     "......#..#...#..........#......",
//     "....#..........#......##...#...",
//     "....#..#.##........#.#...##.#..",
//     "#.##......#........##.#...#...#",
//     "#..#....#.....###........##....",
//     "...........##.....##..#....#.##",
//     "..#....#..#..#......#.#.....#..",
//     "#....#.##....#.....##.......#..",
//     ".#.....#.#..............#.##..#",
//     ".#..#..#...#...#....#.#.....#..",
//     "...###...##.#...#..#........#..",
//     "#...#.##.#.....#.#....#..#.....",
//     "#.....###.#.......#.#..#.#..##.",
//     "....#..#..##.......###.#...#...",
//     ".#...####...............#.....#",
//     ".#.##.#.....#.....#.#......##.#",
//     "#...........#.##....###.##....#",
//     "...............#..........#....",
//     ".....#..#.##.###.#.............",
//     "...##.............#.....#.#..#.",
//     "....#.#...#.#..#..#..#....#....",
//     "..#.......#..........#...#...#.",
//     "...............#.#.#...###....#",
//     "....#...#.##....#..##....#.....",
//     "........#.#.##.........##.##.##",
//     "#.....###.......#.#....#..#..##",
//     ".#..#...#......#.#..##.......#.",
//     "#.....#.#........#.##..#..#....",
//     ".###..##.#.......#......###....",
//     ".#...###.....#.....#....###...#",
//     "........##.##......#.#....#...#",
//     ".#....#..#.........#..##...##..",
//     ".......#.......##.#..#..##.....",
//     "#..##..##......#.#......#.##...",
//     "..#..###..#...#....#..#...#....",
//     "#.............#.####.........##",
//     "..#..................#...#..#..",
//     "..#......#........##.......#.#.",
//     ".#.#.#.#..###.....#....#.#.....",
//     "...#.##.###.......#....#.......",
//     "................##...#.....#...",
//     "..#.###.#...#.####....#..#..#..",
//     "..#....###....##..#.#.........#",
//     ".#..#.#.....#........#....##...",
//     ".....#..#......#..#..##.#.#....",
//     ".#..#.........##....##......#..",
//     ".....#.#...#...#.#...#.#...#.#.",
//     "..#..#...#...#...##.#..###.....",
//     "..#..##......#..##.#...##......",
//     ".......#..##....##.#......#..#.",
//     "..#......#.#.....#.##....##....",
//     "..#....#......#......##........",
//     "....##.#.#....#.......#.##.....",
//     "#.....#...###....#....#...#....",
//     "............#.#..#...#...#..#..",
//     "..##.............##....#.......",
//     ".#.......#.##.#......#....##...",
//     "...##............#....#..#...#.",
//     ".##.####.....#.#..###.#....#.##",
//     "....##.#........#..#...#.......",
//     "...#...###.##...........##..#..",
//     "..##..##....#...#..#..........#",
//     "..#.........#.#...##..........#",
//     ".......##....#.#...##.....#..#.",
//     ".............#.....#.#.......#.",
//     "#.......#..##..##...##.#.......",
//     "..............#.....#.#..#...##",
//     "........##..#.....#...#...#.#..",
//     "###.#.................#........",
//     "...#........#...#.#######..#..#",
//     "...#.##...##.#.#..######...#...",
//     "#.......#..#....#..#.##.....#..",
//     "#..#....##....#.##.......#....#",
//     "#...#..#.#.#...#..#.##..#......",
//     "....#..##....#..#.#...........#",
//     ".##..#.#.............###.......",
//     "#....##......#..#..#.....###...",
//     "..#..........#...###.#.........",
//     ".####......#....#......#.#....#",
//     "..#....#.#.#......#....#.......",
//     ".....#.....#....#....#####....#",
//     ".##..........#...#.###....#....",
//     "....##.....##......#...#.#.....",
//     ".#...#...#..#.#.#...#####......",
//     "...#.##..####.##.##.......##...",
//     "............#.......#..........",
//     ".#..##.#..#####........#..#...#",
//     "#......##..##..##.........##...",
//     "....#....#.............#.#....#",
//     "###..#.....#.....#.#...#..#.###",
//     "#...#.......##......#....#.#.#.",
//     "...#......#..#...#....#...###.#",
//     "....#....##.......#....#......#",
//     "............#......##.##.....#.",
//     "...#.........#......#....##..##",
//     ".....##....##...#..###...#..#..",
//     ".......##.#..........#.##.##...",
//     "....##...........#.#..#..#.##.#",
//     "#...#..##.##.#....#....#.#.....",
//     "...##.#.....#..#..#..###....##.",
//     "#.##.#..#..#.#.............#...",
//     "..#.#.............###.....#....",
//     "...#..#....#..#.....#.#..#..#..",
//     "...#.....##.#...........#..##.#",
//     ".........#.#.##..#..#.#...#....",
//     "...#..##..#...#...###.##.#..#..",
//     ".#..##...##......##..##........",
//     "......##....##.#.##.#.#........",
//     "...#..................#.....#..",
//     ".##................#.#..#..###.",
//     ".##.##.....#................#..",
//     ".....#.#..........#...#..#.#..#",
//     ".............#......#..#.#..#..",
//     "...#...##..#........#....#.....",
//     "#......#........##.##...##.....",
//     "##..#..##....#...#............#",
//     "..##..##.##....##..##........#.",
//     "...#....#.#.#.#....#.#...##....",
//     "....#...##..##.#.##...#..#...#.",
//     "#..#....##.#.....#.......#...##",
//     "##.#....#.............#..#.....",
//     ".##..#..#.#.....#.......#.#..#.",
//     ".......#..#...##...#...###..#..",
//     "..........#...#.#..##.....#...#",
//     "..#....#...........#####....#..",
//     "#....#..#.......##.............",
//     ".........##..#####.......##....",
//     "#..#..........#.....###...#..#.",
//     ".#.#.#..#...#.......##...#####.",
//     ".....#....#.###...#.......#....",
//     "#.#.....##...###....###....#...",
//     ".#.....#..#.#.#........#...#...",
//     ".##.#.#.#......#....###....#...",
//     ".#..##..####......###......#...",
//     "......#.#.#.#.#...#...####.##..",
//     ".#........##..#.....#....#....#",
//     ".....###......##..#....#.......",
//     "#.#.##...#.#......###..........",
//     "........#.#...#..#......#....#.",
//     "..##...##.........#.......#.#..",
//     "..#.##....#...##.....#.###.....",
//     ".........#..#.#....#....#.#.##.",
//     "#.........#......#..#.......#..",
//     "...#...##.......#.........#....",
//     "............#......#...........",
//     "##.....#.....#.#...#.....#.....",
//     "..#.#...#..#...#.#...........#.",
//     "#.#.#..#..#...##.#...#.#.....#.",
//     ".#..###.#..##.#.....#.....#....",
//     "##....##....#.......##..##.....",
//     ".#..#...........###..........#.",
//     ".#..#..#..........###..#.......",
//     "#..###......#............##...#",
//     "#......#........#..#..#..#.#...",
//     ".......#.###...#.##............",
//     ".##....#.......#.#...##.....#.#",
//     "....#..#.#.......#.#...........",
//     "##....#.###.#....#.#..##.#....#",
//     "..#..#..#....#...#........##...",
//     "...#...##....#..#.#...#..#.....",
//     "......#..#......#....#.......#.",
//     "#.#..............#...###...#..#",
//     "...#....#..#..........#.#...#..",
//     "#.....##..##.....#........#....",
//     ".#...##..#.#..............#....",
//     "##.#....#..##...#..#.####.#..#.",
//     ".....#.......#.#.#.#..#.....###",
//     "...#.##....#.#........##.......",
//     "#...#.#...#.#..###..##.##...#.#",
//     "###..............#.#.###.......",
//     "...###..#.#..#....##...###.#...",
//     "......##...........#...#..#...#",
//     ".#..#.........##.......#..#...#",
//     ".#.......###......##...#...#...",
//     ".#......##...#........#.......#",
//     ".#..#.....#.........#.#........",
//     "#...#.#.....#...#..##.........#",
//     "......##.#......##.#..##.#.....",
//     "...............#.#..#....#....#",
//     "#....#..#..#..#.#.....##...##..",
//     "#.#......#.###......#..#...####",
//     ".#.#..#...#...#.#..#.##.##.#.#.",
//     ".....#.#...###...#.#.....##....",
//     "...#..#.#..........##.#....#.#.",
//     "...#..#.#.##.....###.##.#....#.",
//     "..........#..###......#..#.#...",
//     "###.....#..###..#...#..###.#...",
//     "..#..#.....##.#.#..###.......#.",
//     "....#....##........##..........",
//     ".......#..........#...#......#.",
//     ".#........#.#.#.#.#.......#....",
//     ".#..#.......##..##....#.#...#..",
//     ".#.#.#.......#..#..............",
//     "#.#....#.#...#.#.#.....#.#...##",
//     ".....#..........##..#.......#..",
//     ".##......#.#....#.#.......#....",
//     "..#.##....#.##.#...#...........",
//     "...##......##..##.............#",
//     "..........##.#.#..#..........#.",
//     ".##....#..#..#.#....##.#...#.#.",
//     "...........#....#.....#.#..#...",
//     ".#.....#....##..#.........#....",
//     ".....#.....#...#....#...#.###.#",
//     "..#....#....#.....#...#......#.",
//     ".....##..#.............#...#...",
//     "........#..#.......#.#.......#.",
//     "#...###..#.##.#...###...##..##.",
//     "....##..#.......#...#.#........",
//     ".#...#.#.##....####........#..#",
//     ".#...#.#.####.##.#.............",
//     "#..##...#....#...#.#.#.#.##..#.",
//     ".#.......#........#.....###....",
//     "#.#.....#....#..#....#..#....#.",
//     "...#..#...#.....#.........##...",
//     ".#....#......###...#....#.#.#..",
//     "#.#........#......#...#....##..",
//     ".....#..#......#..#..#......#..",
//     ".#.....#..#.##.#.#.#...#......#",
//     "##........#..#.#..#...#.####...",
//     "..........##....#.#..#.#....#..",
//     "#.##..#..#....#..#....##..#.#.#",
//     "..#......#.......#...##..#.....",
//     "##...#.........#......#......#.",
//     ".#.....................#..#.##.",
//     ".#.......#........#.#.#..##.#..",
//     "..#..........#........#..##.#..",
//     ".#...#...#.........##.#.#.#....",
//     "....#....#.###.#....###....#.##",
//     "....##......##........##.#.##..",
//     "....#.#......#.##.#...#.##.....",
//     "....#....#..#.#..###.#.#.......",
//     "....#......#..#.#.......#..##..",
//     ".....#..#.#.##.##..##.....#.#..",
//     "...#....................##.....",
//     "#.....#...##...#.#.............",
//     "..#.#...#.#.#.....##..#....#..."};

int main()
{

    int tam = sizeof(datos) / sizeof(datos[0]);
    // cout << tam << endl ;

    int tamCadaFilaDatos = 0;
    tamCadaFilaDatos = strlen(datos[0]);
    cout << tamCadaFilaDatos << endl;

    int derecha = 3;
    int abajo = 1;
    int aux = 0;
    int square = 0;
    int tree = 0;
    for (int i = 0; i < tam; i = i + abajo)
    {
        // cout << datos[i][aux] << endl;

        if (aux < tamCadaFilaDatos)
        {
            // cout << "fila: " << i << " Columna: " << aux  << " Dato: " << datos[i][aux] << endl;
            cout << datos[i][aux] << endl;
            if (datos[i][aux] == '#')
            {
                tree = tree + 1;
            }
            aux = aux + derecha;
        }
        else
        {
            aux = aux % tamCadaFilaDatos;
            // cout << "fila: " << i << " Columna: " << aux << " Dato: " << datos[i][aux]<< endl;
            cout << datos[i][aux] << endl;
            if (datos[i][aux] == '#')
            {
                tree = tree + 1;
            }
            aux = aux + derecha;
        }
    }

    cout << "cantidad de arboles : " << tree << endl;

    return 0;
}