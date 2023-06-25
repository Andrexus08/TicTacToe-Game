#include <iostream>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////
// Hier wurde die Bibliothek SFML 2.5.1 mit eingebunden, funktioniert ohne Download nicht
///////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "SFML Mouse Click Event");
   
    VertexArray line1(Lines, 2);
    line1[0].position = Vector2f(266, 0);
    line1[0].color = Color::White;

    line1[1].position = Vector2f(266, 600);
    line1[1].color = Color::White;
    
    VertexArray line2(Lines, 2);
    line2[0].position = Vector2f(532, 0);
    line2[0].color = Color::White;

    line2[1].position = Vector2f(532, 600);
    line2[1].color = Color::White;

    VertexArray line3(Lines, 2);
    line3[0].position = Vector2f(0, 200);
    line3[0].color = Color::White;

    line3[1].position = Vector2f(800, 200);
    line3[1].color = Color::White;

    VertexArray line4(Lines, 2);
    line4[0].position = Vector2f(0, 400);
    line4[0].color = Color::White;

    line4[1].position = Vector2f(800, 400);
    line4[1].color = Color::White;

    ///////////////////////////////////////
    //OBERE REIHE
    ///////////////////////////////////////
    VertexArray cross1(Lines, 4);
    cross1[0].position = Vector2f(0, 0);
    cross1[0].color = Color::White;
    cross1[1].position = Vector2f(266, 200);
    cross1[1].color = Color::White;
    cross1[2].position = Vector2f(0, 200);
    cross1[2].color = Color::White;
    cross1[3].position = Vector2f(266, 0);
    cross1[3].color = Color::White;

    VertexArray cross2(Lines, 4);
    cross2[0].position = Vector2f(266, 0);
    cross2[0].color = Color::White;
    cross2[1].position = Vector2f(532, 200);
    cross2[1].color = Color::White;
    cross2[2].position = Vector2f(266, 200);
    cross2[2].color = Color::White;
    cross2[3].position = Vector2f(532, 0);
    cross2[3].color = Color::White;

    VertexArray cross3(Lines, 4);
    cross3[0].position = Vector2f(532, 0);
    cross3[0].color = Color::White;
    cross3[1].position = Vector2f(800, 200);
    cross3[1].color = Color::White;
    cross3[2].position = Vector2f(532, 200);
    cross3[2].color = Color::White;
    cross3[3].position = Vector2f(800, 0);
    cross3[3].color = Color::White;

    CircleShape circle1(100);
    circle1.setPosition(33, 0);
    circle1.setFillColor(Color::Transparent);
    circle1.setOutlineThickness(2);
    circle1.setOutlineColor(Color::White);

    CircleShape circle2(100);
    circle2.setPosition(300, 0);
    circle2.setFillColor(Color::Transparent);
    circle2.setOutlineThickness(2);
    circle2.setOutlineColor(Color::White);

    CircleShape circle3(100);
    circle3.setPosition(566, 0);
    circle3.setFillColor(Color::Transparent);
    circle3.setOutlineThickness(2);
    circle3.setOutlineColor(Color::White);

    ///////////////////////////////////////
    //MITTLERE REIHE
    ///////////////////////////////////////
    VertexArray cross4(Lines, 4);
    cross4[0].position = Vector2f(0, 200);
    cross4[0].color = Color::White;
    cross4[1].position = Vector2f(266, 400);
    cross4[1].color = Color::White;
    cross4[2].position = Vector2f(0, 400);
    cross4[2].color = Color::White;
    cross4[3].position = Vector2f(266, 200);
    cross4[3].color = Color::White;

    VertexArray cross5(Lines, 4);
    cross5[0].position = Vector2f(266, 200);
    cross5[0].color = Color::White;
    cross5[1].position = Vector2f(532, 400);
    cross5[1].color = Color::White;
    cross5[2].position = Vector2f(266, 400);
    cross5[2].color = Color::White;
    cross5[3].position = Vector2f(532, 200);
    cross5[3].color = Color::White;

    VertexArray cross6(Lines, 4);
    cross6[0].position = Vector2f(532, 200);
    cross6[0].color = Color::White;
    cross6[1].position = Vector2f(800, 400);
    cross6[1].color = Color::White;
    cross6[2].position = Vector2f(532, 400);
    cross6[2].color = Color::White;
    cross6[3].position = Vector2f(800, 200);
    cross6[3].color = Color::White;

    CircleShape circle4(100);
    circle4.setPosition(33, 200);
    circle4.setFillColor(Color::Transparent);
    circle4.setOutlineThickness(2);
    circle4.setOutlineColor(Color::White);

    CircleShape circle5(100);
    circle5.setPosition(300, 200);
    circle5.setFillColor(Color::Transparent);
    circle5.setOutlineThickness(2);
    circle5.setOutlineColor(Color::White);

    CircleShape circle6(100);
    circle6.setPosition(566, 200);
    circle6.setFillColor(Color::Transparent);
    circle6.setOutlineThickness(2);
    circle6.setOutlineColor(Color::White);

    ///////////////////////////////////////
    //UNTERE REIHE
    ///////////////////////////////////////
    VertexArray cross7(Lines, 4);
    cross7[0].position = Vector2f(0, 400);
    cross7[0].color = Color::White;
    cross7[1].position = Vector2f(266, 600);
    cross7[1].color = Color::White;
    cross7[2].position = Vector2f(0, 600);
    cross7[2].color = Color::White;
    cross7[3].position = Vector2f(266, 400);
    cross7[3].color = Color::White;

    VertexArray cross8(Lines, 4);
    cross8[0].position = Vector2f(266, 400);
    cross8[0].color = Color::White;
    cross8[1].position = Vector2f(532, 600);
    cross8[1].color = Color::White;
    cross8[2].position = Vector2f(266, 600);
    cross8[2].color = Color::White;
    cross8[3].position = Vector2f(532, 400);
    cross8[3].color = Color::White;

    VertexArray cross9(Lines, 4);
    cross9[0].position = Vector2f(532, 400);
    cross9[0].color = Color::White;
    cross9[1].position = Vector2f(800, 600);
    cross9[1].color = Color::White;
    cross9[2].position = Vector2f(532, 600);
    cross9[2].color = Color::White;
    cross9[3].position = Vector2f(800, 400);
    cross9[3].color = Color::White;

    CircleShape circle7(100);
    circle7.setPosition(33, 400);
    circle7.setFillColor(Color::Transparent);
    circle7.setOutlineThickness(2);
    circle7.setOutlineColor(Color::White);

    CircleShape circle8(100);
    circle8.setPosition(300, 400);
    circle8.setFillColor(Color::Transparent);
    circle8.setOutlineThickness(2);
    circle8.setOutlineColor(Color::White);

    CircleShape circle9(100);
    circle9.setPosition(566, 400);
    circle9.setFillColor(Color::Transparent);
    circle9.setOutlineThickness(2);
    circle9.setOutlineColor(Color::White);

    ///////////////////////////////////////
    //GEWINNERTEXTE
    ///////////////////////////////////////
    Font font;
    if (!font.loadFromFile("Fonts/arial.ttf")) //Die Fonts sind bei mir in einem selbsterstellten Ordner des Projektes Namens "Fonts" --> deshalb "Fonts/"
    {
        // Fehlerbehandlung, wenn die Schriftart nicht geladen werden kann
        return -1;
    }
    Text winKreuz;
    winKreuz.setFont(font);
    winKreuz.setCharacterSize(50);
    winKreuz.setPosition(110, 250);
    winKreuz.setFillColor(Color::Red);
    winKreuz.setString("KREUZ HAT GEWONNEN");

    Text winKreis;
    winKreis.setFont(font);
    winKreis.setCharacterSize(50);
    winKreis.setPosition(110, 250);
    winKreis.setFillColor(Color::Red);
    winKreis.setString("KREIS HAT GEWONNEN");

    //Hintergrundabdeckung
    RectangleShape hintergrund;
    hintergrund.setFillColor(Color::White);
    hintergrund.setSize(Vector2f(670, 60));
    hintergrund.setPosition(70, 250);
    
    ///////////////////////////////////////
    //GEWINNERLINIEN WAAGERECHT
    ///////////////////////////////////////
    VertexArray win1(Lines, 2);
    win1[0].position = Vector2f(0, 100);
    win1[0].color = Color::Green;
    win1[1].position = Vector2f(800, 100);
    win1[1].color = Color::Green;

    VertexArray win2(Lines, 2);
    win2[0].position = Vector2f(0, 300);
    win2[0].color = Color::Green;
    win2[1].position = Vector2f(800, 300);
    win2[1].color = Color::Green;

    VertexArray win3(Lines, 2);
    win3[0].position = Vector2f(0, 500);
    win3[0].color = Color::Green;
    win3[1].position = Vector2f(800, 500);
    win3[1].color = Color::Green;

    ///////////////////////////////////////
    //GEWINNERLINIEN SENKRECHT
    ///////////////////////////////////////
    VertexArray win4(Lines, 2);
    win4[0].position = Vector2f(133, 0);
    win4[0].color = Color::Green;
    win4[1].position = Vector2f(133, 600);
    win4[1].color = Color::Green;

    VertexArray win5(Lines, 2);
    win5[0].position = Vector2f(400, 0);
    win5[0].color = Color::Green;
    win5[1].position = Vector2f(400, 600);
    win5[1].color = Color::Green;

    VertexArray win6(Lines, 2);
    win6[0].position = Vector2f(666, 0);
    win6[0].color = Color::Green;
    win6[1].position = Vector2f(666, 600);
    win6[1].color = Color::Green;

    ///////////////////////////////////////
    //GEWINNERLINIEN DIAGONAL
    ///////////////////////////////////////
    VertexArray win7(Lines, 2);
    win7[0].position = Vector2f(0, 0);
    win7[0].color = Color::Green;
    win7[1].position = Vector2f(800, 600);
    win7[1].color = Color::Green;

    VertexArray win8(Lines, 2);
    win8[0].position = Vector2f(0, 600);
    win8[0].color = Color::Green;
    win8[1].position = Vector2f(800, 0);
    win8[1].color = Color::Green;
    
    bool drawCross1 = false;
    bool drawCross2 = false;
    bool drawCross3 = false;
    bool drawCross4 = false;
    bool drawCross5 = false;
    bool drawCross6 = false;
    bool drawCross7 = false;
    bool drawCross8 = false;
    bool drawCross9 = false;
    bool drawCircle1 = false;
    bool drawCircle2 = false;
    bool drawCircle3 = false;
    bool drawCircle4 = false;
    bool drawCircle5 = false;
    bool drawCircle6 = false;
    bool drawCircle7 = false;
    bool drawCircle8 = false;
    bool drawCircle9 = false;
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    Vector2i mousePos = Mouse::getPosition(window);
                    cout << "Mausposition: (" << mousePos.x << ", " << mousePos.y << ")" << endl;
                    
                    ////////////////////////////////////////////
                    //OBERE REIHE
                    ////////////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y < 200) {
                        drawCross1 = true;
                        drawCircle1 = false;
                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y < 200) {
                        drawCross2 = true;
                        drawCircle2 = false;
                    }
                    if (mousePos.x > 550 and mousePos.y < 200) {
                        drawCross3 = true;
                        drawCircle3 = false;
                    }

                    ////////////////////////////////////////////
                    //MITTLERE REIHE
                    ////////////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross4 = true; 
                        drawCircle4 = false;
                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross5 = true;
                        drawCircle5 = false;
                    }
                    if (mousePos.x > 550 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross6 = true;
                        drawCircle6 = false;
                    }

                    ///////////////////////////////////////
                    //UNTERE REIHE
                    ///////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y > 200 and mousePos.y > 400) {
                        drawCross7 = true;
                        drawCircle7 = false;
                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y > 400) {
                        drawCross8 = true;
                        drawCircle8 = false;
                    }
                    if (mousePos.x > 550 and mousePos.y > 400) {
                        drawCross9 = true;
                        drawCircle9 = false;
                    }


                }
                if (event.mouseButton.button == Mouse::Right)
                {
                    Vector2i mousePos = Mouse::getPosition(window);
                    cout << "Mausposition: (" << mousePos.x << ", " << mousePos.y << ")" << endl;

                    ////////////////////////////////////////////
                    //OBERE REIHE
                    ////////////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y < 200) {
                        drawCross1 = false;
                        drawCircle1 = true;

                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y < 200) {
                        drawCross2 = false;
                        drawCircle2 = true;
                    }
                    if (mousePos.x > 550 and mousePos.y < 200) {
                        drawCross3 = false;
                        drawCircle3 = true;
                    }

                    ////////////////////////////////////////////
                    //MITTLERE REIHE
                    ////////////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross4 = false;
                        drawCircle4 = true;
                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross5 = false;
                        drawCircle5 = true;
                    }
                    if (mousePos.x > 550 and mousePos.y > 200 and mousePos.y < 400) {
                        drawCross6 = false;
                        drawCircle6 = true;
                    }

                    ///////////////////////////////////////
                    //UNTERE REIHE
                    ///////////////////////////////////////
                    if (mousePos.x < 250 and mousePos.y > 200 and mousePos.y > 400) {
                        drawCross7 = false;
                        drawCircle7 = true;
                    }
                    if (mousePos.x < 550 and mousePos.x > 250 and mousePos.y > 400) {
                        drawCross8 = false;
                        drawCircle8 = true;
                    }
                    if (mousePos.x > 550 and mousePos.y > 400) {
                        drawCross9 = false;
                        drawCircle9 = true;
                    }
                }
            }
        }

        window.clear();
        window.draw(line1);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);
        //Kreise Aufbau
        if (drawCircle1) {
            window.draw(circle1);
        }
        if (drawCircle2) {
            window.draw(circle2);
        }
        if (drawCircle3) {
            window.draw(circle3);
        }
        if (drawCircle4) {
            window.draw(circle4);
        }
        if (drawCircle5) {
            window.draw(circle5);
        }
        if (drawCircle6) {
            window.draw(circle6);
        }
        if (drawCircle7) {
            window.draw(circle7);
        }
        if (drawCircle8) {
            window.draw(circle8);
        }
        if (drawCircle9) {
            window.draw(circle9);
        }
        //Kreuze Aufbau
        if (drawCross1) {
            window.draw(cross1);
        }
        if (drawCross2) {
            window.draw(cross2);
        }
        if (drawCross3) {
            window.draw(cross3);
        }
        if (drawCross4) {
            window.draw(cross4);
        }
        if (drawCross5) {
            window.draw(cross5);
        }
        if (drawCross6) {
            window.draw(cross6);
        }
        if (drawCross7) {
            window.draw(cross7);
        }
        if (drawCross8) {
            window.draw(cross8);
        }
        if (drawCross9) {
            window.draw(cross9);
        }
        if (event.mouseButton.button == Mouse::Middle) {
            drawCross1 = false;
            drawCross2 = false;
            drawCross3 = false;
            drawCross4 = false;
            drawCross5 = false;
            drawCross6 = false;
            drawCross7 = false;
            drawCross8 = false;
            drawCross9 = false;
            drawCircle1 = false;
            drawCircle2 = false;
            drawCircle3 = false;
            drawCircle4 = false;
            drawCircle5 = false;
            drawCircle6 = false;
            drawCircle7 = false;
            drawCircle8 = false;
            drawCircle9 = false;
        }

        /////////////////////////////////////
        // KREUZ GEWINNT
        /////////////////////////////////////

        //Wenn Kreuz gewinnt waagerecht
        if (drawCross1 && drawCross2 && drawCross3) {
            window.draw(win1);
            window.draw(hintergrund);
            window.draw(winKreuz);

        }
        if (drawCross4 && drawCross5 && drawCross6) {
            window.draw(win2);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        if (drawCross7 && drawCross8 && drawCross9) {
            window.draw(win3);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        //Wenn Kreuz gewinnt senkrecht
        if (drawCross1 && drawCross4 && drawCross7) {
            window.draw(win4);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        if (drawCross2 && drawCross5 && drawCross8) {
            window.draw(win5);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        if (drawCross3 && drawCross6 && drawCross9) {
            window.draw(win6);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        //Wenn Kreuz gewinnt diagonal
        if (drawCross1 && drawCross5 && drawCross9) {
            window.draw(win7);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        if (drawCross7 && drawCross5 && drawCross3) {
            window.draw(win8);
            window.draw(hintergrund);
            window.draw(winKreuz);
        }
        /////////////////////////////////////
        // KREIS GEWINNT
        /////////////////////////////////////
        
        //Wenn Kreis gewinnt waagerecht
        if (drawCircle1 && drawCircle2 && drawCircle3) {
            window.draw(win1);
            window.draw(hintergrund);
            window.draw(winKreis);
        
        }
        if (drawCircle4 && drawCircle5 && drawCircle6) {
            window.draw(win2);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        if (drawCircle7 && drawCircle8 && drawCircle9) {
            window.draw(win3);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        //Wenn Kreis gewinnt senkrecht
        if (drawCircle1 && drawCircle4 && drawCircle7) {
            window.draw(win4);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        if (drawCircle2 && drawCircle5 && drawCircle8) {
            window.draw(win5);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        if (drawCircle3 && drawCircle6 && drawCircle9) {
            window.draw(win6);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        //Wenn Kreis gewinnt diagonal
        if (drawCircle1 && drawCircle5 && drawCircle9) {
            window.draw(win7);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        if (drawCircle7 && drawCircle5 && drawCircle3) {
            window.draw(win8);
            window.draw(hintergrund);
            window.draw(winKreis);
        }
        window.display();
    }
    return 0;
}
