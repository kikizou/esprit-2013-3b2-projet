#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"

void pause();
void srandom(void);
int chichbich(int nb_de, int nb_faces);
int main(int argc, char *argv[])
{
    int varMenu = 1;
    SDL_Surface *screen=NULL;	//This pointer will reference the backbuffer
    	//This pointer will reference our bitmap sprite
int s ;
    int a,b,nb_de, nb_faces;
    a=1; //position actuelle de l'oie entre 1 et 63
    b=0; // r�sultat de d� : nombre de cases � ajouter
    s=a+b; //nouvelle case de l'oie entre 1 et 63

    SDL_Rect oie;
    SDL_Rect image1;
    SDL_Rect image2;
    SDL_Rect image3;
    SDL_Rect image4;
    SDL_Rect image5;
    SDL_Rect image6;
    SDL_Rect image7;
    SDL_Rect image8;
    SDL_Rect image9;
    SDL_Rect image10;
    SDL_Rect image11;
    SDL_Rect image12;
    SDL_Rect image13;
    SDL_Rect image14;
    SDL_Rect image15;
    SDL_Rect image16;
    SDL_Rect image17;
    SDL_Rect image18;
    SDL_Rect image19;
    SDL_Rect image20;
    SDL_Rect image21;
    SDL_Rect image22;
    SDL_Rect image23;
    SDL_Rect image24;
    SDL_Rect image25;
    SDL_Rect image26;
    SDL_Rect image27;
    SDL_Rect image28;
    SDL_Rect image29;
    SDL_Rect image30;
    SDL_Rect image31;
    SDL_Rect image32;
    SDL_Rect image33;
    SDL_Rect image34;
    SDL_Rect image35;
    SDL_Rect image36;
    SDL_Rect image37;
    SDL_Rect image38;
    SDL_Rect image39;
    SDL_Rect image40;
    SDL_Rect image41;
    SDL_Rect image42;
    SDL_Rect image43;
    SDL_Rect image44;
    SDL_Rect image45;
    SDL_Rect image46;
    SDL_Rect image47;
    SDL_Rect image48;
    SDL_Rect image49;
    SDL_Rect image50;
    SDL_Rect image51;
    SDL_Rect image52;
    SDL_Rect image53;
    SDL_Rect image54;
    SDL_Rect image55;
    SDL_Rect image56;
    SDL_Rect image57;
    SDL_Rect image58;
    SDL_Rect image59;
    SDL_Rect image60;
    SDL_Rect image61;
    SDL_Rect image62;
    SDL_Rect image63;
     SDL_Rect pos1;
     SDL_Rect pos2;
    SDL_Rect pos3;

    SDL_Surface *iimage1;
    SDL_Surface *iimage2;
    SDL_Surface *iimage3;
    SDL_Surface *iimage4;
    SDL_Surface *iimage5;
    SDL_Surface *iimage6;
    SDL_Surface *iimage7;
    SDL_Surface *iimage8;
    SDL_Surface *iimage9;
    SDL_Surface *iimage10;
    SDL_Surface *iimage11;
    SDL_Surface *iimage12;
    SDL_Surface *iimage13;
    SDL_Surface *iimage14;
    SDL_Surface *iimage15;
    SDL_Surface *iimage16;
    SDL_Surface *iimage17;
    SDL_Surface *iimage18;
    SDL_Surface *iimage19;
    SDL_Surface *iimage20;
    SDL_Surface *iimage21;
    SDL_Surface *iimage22;
    SDL_Surface *iimage23;
    SDL_Surface *iimage24;
    SDL_Surface *iimage25;
    SDL_Surface *iimage26;
    SDL_Surface *iimage27;
    SDL_Surface *iimage28;
    SDL_Surface *iimage29;
    SDL_Surface *iimage30;
    SDL_Surface *iimage31;
    SDL_Surface *iimage32;
    SDL_Surface *iimage33;
    SDL_Surface *iimage34;
    SDL_Surface *iimage35;
    SDL_Surface *iimage36;
    SDL_Surface *iimage37;
    SDL_Surface *iimage38;
    SDL_Surface *iimage39;
    SDL_Surface *iimage40;
    SDL_Surface *iimage41;
    SDL_Surface *iimage42;
    SDL_Surface *iimage43;
    SDL_Surface *iimage44;
    SDL_Surface *iimage45;
    SDL_Surface *iimage46;
    SDL_Surface *iimage47;
    SDL_Surface *iimage48;
    SDL_Surface *iimage49;
    SDL_Surface *iimage50;
    SDL_Surface *iimage51;
    SDL_Surface *iimage52;
    SDL_Surface *iimage53;
    SDL_Surface *iimage54;
    SDL_Surface *iimage55;
    SDL_Surface *iimage56;
    SDL_Surface *iimage57;
    SDL_Surface *iimage58;
    SDL_Surface *iimage59;
    SDL_Surface *iimage60;
    SDL_Surface *iimage61;
    SDL_Surface *iimage62;
    SDL_Surface *iimage63;
    SDL_Surface *menu;
     SDL_Surface *image_oie;
     SDL_Surface *gagnant;
     SDL_Surface *de;


    image1.x=0;
    image1.y=0;
    image2.x=100;
    image2.y=0;
    image3.x=200;
    image3.y=0;
    image4.x=300;
    image4.y=0;
    image5.x=400;
    image5.y=0;
    image6.x=500;
    image6.y=0;
    image7.x=600;
    image7.y=0;
    image8.x=700;
    image8.y=0;
    image9.x=700;
    image9.y=75;
    image10.x=700;
    image10.y=150;
    image11.x=700;
    image11.y=225;
    image12.x=700;
    image12.y=300;
    image13.x=700;
    image13.y=375;
    image14.x=700;
    image14.y=450;
    image15.x=700;
    image15.y=525;
    image16.x=600;
    image16.y=525;
    image17.x=500;
    image17.y=525;
    image18.x=400;
    image18.y=525;
    image19.x=300;
    image19.y=525;
    image20.x=200;
    image20.y=525;
    image21.x=100;
    image21.y=525;
    image22.x=0;
    image22.y=525;
    image23.x=0;
    image23.y=450;
    image24.x=0;
    image24.y=375;
    image25.x=0;
    image25.y=300;
    image26.x=0;
    image26.y=225;
    image27.x=0;
    image27.y=150;
    image28.x=0;
    image28.y=75;
    image29.x=100;
    image29.y=75;
    image30.x=200;
    image30.y=75;
    image31.x=300;
    image31.y=75;
    image32.x=400;
    image32.y=75;
    image33.x=500;
    image33.y=75;
    image34.x=600;
    image34.y=75;
    image35.x=600;
    image35.y=150;
    image36.x=600;
    image36.y=225;
    image37.x=600;
    image37.y=300;
    image38.x=600;
    image38.y=375;
    image39.x=600;
    image39.y=450;
    image40.x=500;
    image40.y=450;
    image41.x=400;
    image41.y=450;
    image42.x=300;
    image42.y=450;
    image43.x=200;
    image43.y=450;
    image44.x=100;
    image44.y=450;
    image45.x=100;
    image45.y=375;
    image46.x=100;
    image46.y=300;
    image47.x=100;
    image47.y=225;
    image48.x=100;
    image48.y=150;
    image49.x=200;
    image49.y=150;
    image50.x=300;
    image50.y=150;
    image51.x=400;
    image51.y=150;
    image52.x=500;
    image52.y=150;
    image53.x=500;
    image53.y=225;
    image54.x=500;
    image54.y=300;
    image55.x=500;
    image55.y=375;
    image56.x=400;
    image56.y=375;
    image57.x=300;
    image57.y=375;
    image58.x=200;
    image58.y=375;
    image59.x=200;
    image59.y=300;
    image60.x=200;
    image60.y=225;
    image61.x=300;
    image61.y=225;
    image62.x=400;
    image62.y=225;
    image63.x=300;
    image63.y=300;
     oie.x=0;
    oie.y=0;



    image1.w=100;
    image1.h=75;
    image2.w=100;
    image2.h=75;
    image3.w=100;
    image3.h=75;
    image4.w=100;
    image4.h=75;
    image5.w=100;
    image5.h=75;
    image6.w=100;
    image6.h=75;
    image7.w=100;
    image7.h=75;
    image8.w=100;
    image8.h=75;
    image9.w=100;
    image9.h=75;
    image10.w=100;
    image10.h=75;
    image11.w=100;
    image11.h=75;
    image12.w=100;
    image12.h=75;
    image13.w=100;
    image13.h=75;
    image14.w=100;
    image14.h=75;
    image15.w=100;
    image15.h=75;
    image16.w=100;
    image16.h=75;
    image17.w=100;
    image17.h=75;
    image18.w=100;
    image18.h=75;
    image19.w=100;
    image19.h=75;
    image20.w=100;
    image20.h=75;
    image21.w=100;
    image21.h=75;
    image22.w=100;
    image22.h=75;
    image23.w=100;
    image23.h=75;
    image24.w=100;
    image24.h=75;
    image25.w=100;
    image25.h=75;
    image26.w=100;
    image26.h=75;
    image27.w=100;
    image27.h=75;
    image28.w=100;
    image28.h=75;
    image29.w=100;
    image29.h=75;
    image30.w=100;
    image30.h=75;
    image31.w=100;
    image31.h=75;
    image32.w=100;
    image32.h=75;
    image33.w=100;
    image33.h=75;
    image34.w=100;
    image34.h=75;
    image35.w=100;
    image35.h=75;
    image36.w=100;
    image36.h=75;
    image37.w=100;
    image37.h=75;
    image38.w=100;
    image38.h=75;
    image39.w=100;
    image39.h=75;
    image40.w=100;
    image40.h=75;
    image41.w=100;
    image41.h=75;
    image42.w=100;
    image42.h=75;
    image43.w=100;
    image43.h=75;
    image44.w=100;
    image44.h=75;
    image45.w=100;
    image45.h=75;
    image46.w=100;
    image46.h=75;
    image47.w=100;
    image47.h=75;
    image48.w=100;
    image48.h=75;
    image49.w=100;
    image49.h=75;
    image50.w=100;
    image50.h=75;
    image51.w=100;
    image51.h=75;
    image52.w=100;
    image52.h=75;
    image53.w=100;
    image53.h=75;
    image54.w=100;
    image54.h=75;
    image55.w=100;
    image55.h=75;
    image56.w=100;
    image56.h=75;
    image57.w=100;
    image57.h=75;
    image58.w=100;
    image58.h=75;
    image59.w=100;
    image59.h=75;
    image60.w=100;
    image60.h=75;
    image61.w=100;
    image61.h=75;
    image62.w=100;
    image62.h=75;
    image63.w=100;
    image63.h=75;
   oie.w=100;
   oie.h=75;


    SDL_Event event;

    int done=1;



    //We must first initialize the SDL video component, and check for success



       // D�marrage de la SDL. Si erreur :
         if (SDL_Init(SDL_INIT_VIDEO) != 0) {
printf("Unable to initialize SDL: %s\n", SDL_GetError());
return 1; // On quitte le programme
    }


    //Set the video mode to fullscreen 640x480 with 16bit colour and double-buffering
    screen = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE| SDL_DOUBLEBUF|SDL_FULLSCREEN);
    if (screen == NULL)
    {
        printf("Unable to set video mode: %s\n", SDL_GetError());
        return 1;
    }


    SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
                       pos1.x=0;
                       pos1.y=0;
                       pos1.w=800;
                       pos1.h=600;
                        menu=SDL_LoadBMP("img/image_initiale.bmp");
                          pos2.x=0;
                    pos2.y=0;
                       pos2.w=800;
                       pos2.h=600;
                    gagnant=SDL_LoadBMP("img/gagnant.bmp");


              SDL_BlitSurface(menu,NULL,screen,&pos1);
                      pos3.x=0;
                       pos3.y=0;
                       pos3.w=800;
                       pos3.h=600;
                      de=SDL_LoadBMP("de1.bmp");

    //Load the bitmap into a temporary surface, and check for success


    iimage1 = SDL_LoadBMP("img/image1.bmp");
    if (iimage1 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage2 = SDL_LoadBMP("img/image2.bmp");
    if (iimage2 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage3 = SDL_LoadBMP("img/image3.bmp");
    if (iimage3 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage4 = SDL_LoadBMP("img/image4.bmp");
    if (iimage4 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage5 = SDL_LoadBMP("img/image5.bmp");
    if (iimage5 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage6 = SDL_LoadBMP("img/image6.bmp");
    if (iimage6 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage7 = SDL_LoadBMP("img/image7.bmp");
    if (iimage7 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage8 = SDL_LoadBMP("img/image8.bmp");
    if (iimage8 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage9 = SDL_LoadBMP("img/image9.bmp");
    if (iimage9 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage10 = SDL_LoadBMP("img/image10.bmp");
    if (iimage10 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage11 = SDL_LoadBMP("img/image11.bmp");
    if (iimage11 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage12 = SDL_LoadBMP("img/image12.bmp");
    if (iimage12 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage13 = SDL_LoadBMP("img/image13.bmp");
    if (iimage13 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage14 = SDL_LoadBMP("img/image14.bmp");
    if (iimage14 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage15 = SDL_LoadBMP("img/image15.bmp");
    if (iimage15 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage16 = SDL_LoadBMP("img/image16.bmp");
    if (iimage16 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage17 = SDL_LoadBMP("img/image17.bmp");
    if (iimage17 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage18 = SDL_LoadBMP("img/image18.bmp");
    if (iimage18 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage19 = SDL_LoadBMP("img/image19.bmp");
    if (iimage19 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage20 = SDL_LoadBMP("img/image20.bmp");
    if (iimage20 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage21 = SDL_LoadBMP("img/image21.bmp");
    if (iimage21 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage22 = SDL_LoadBMP("img/image22.bmp");
    if (iimage22 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage23 = SDL_LoadBMP("img/image23.bmp");
    if (iimage23 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage24 = SDL_LoadBMP("img/image24.bmp");
    if (iimage24 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage25 = SDL_LoadBMP("img/image25.bmp");
    if (iimage25 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage26 = SDL_LoadBMP("img/image26.bmp");
    if (iimage26 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage27 = SDL_LoadBMP("img/image27.bmp");
    if (iimage27 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage28 = SDL_LoadBMP("img/image28.bmp");
    if (iimage28 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage29 = SDL_LoadBMP("img/image29.bmp");
    if (iimage29 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage30 = SDL_LoadBMP("img/image30.bmp");
    if (iimage30 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage31 = SDL_LoadBMP("img/image31.bmp");
    if (iimage31 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage32 = SDL_LoadBMP("img/image32.bmp");
    if (iimage32 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage33 = SDL_LoadBMP("img/image33.bmp");
    if (iimage33 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage34 = SDL_LoadBMP("img/image34.bmp");
    if (iimage34 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage35 = SDL_LoadBMP("img/image35.bmp");
    if (iimage35 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage36 = SDL_LoadBMP("img/image36.bmp");
    if (iimage36 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage37 = SDL_LoadBMP("img/image37.bmp");
    if (iimage37 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage38 = SDL_LoadBMP("img/image38.bmp");
    if (iimage38 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage39 = SDL_LoadBMP("img/image39.bmp");
    if (iimage39 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage40 = SDL_LoadBMP("img/image40.bmp");
    if (iimage40 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage41 = SDL_LoadBMP("img/image41.bmp");
    if (iimage41 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage42 = SDL_LoadBMP("img/image42.bmp");
    if (iimage42 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage43 = SDL_LoadBMP("img/image43.bmp");
    if (iimage43 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage44 = SDL_LoadBMP("img/image44.bmp");
    if (iimage44 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage45 = SDL_LoadBMP("img/image45.bmp");
    if (iimage45 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage46 = SDL_LoadBMP("img/image46.bmp");
    if (iimage46 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage47 = SDL_LoadBMP("img/image47.bmp");
    if (iimage47 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage48 = SDL_LoadBMP("img/image48.bmp");
    if (iimage48 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage49 = SDL_LoadBMP("img/image49.bmp");
    if (iimage49 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage50 = SDL_LoadBMP("img/image50.bmp");
    if (iimage50 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage51 = SDL_LoadBMP("img/image51.bmp");
    if (iimage51 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage52 = SDL_LoadBMP("img/image52.bmp");
    if (iimage52 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage53 = SDL_LoadBMP("img/image53.bmp");
    if (iimage53 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage54 = SDL_LoadBMP("img/image54.bmp");
    if (iimage54 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage55 = SDL_LoadBMP("img/image55.bmp");
    if (iimage55 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage56 = SDL_LoadBMP("img/image56.bmp");
    if (iimage56 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage57 = SDL_LoadBMP("img/image57.bmp");
    if (iimage57 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage58 = SDL_LoadBMP("img/image58.bmp");
    if (iimage58 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage59 = SDL_LoadBMP("img/image59.bmp");
    if (iimage59 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage60 = SDL_LoadBMP("img/image60.bmp");
    if (iimage60 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage61 = SDL_LoadBMP("img/image61.bmp");
    if (iimage61 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage62 = SDL_LoadBMP("img/image62.bmp");
    if (iimage62 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
    iimage63 = SDL_LoadBMP("img/image63.bmp");
    if (iimage63 == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }
     image_oie= SDL_LoadBMP("img/oie.bmp");
    if (image_oie == NULL)
    {
        printf("Unable to load bitmap: %s\n", SDL_GetError());
        return 1;
    }


    // set the color of maps background (white color) as transparent

    SDL_SetColorKey( iimage1, SDL_SRCCOLORKEY, SDL_MapRGB(iimage1->format, 255, 255, 255) );
    SDL_SetColorKey( iimage2, SDL_SRCCOLORKEY, SDL_MapRGB(iimage2->format, 255, 255, 255) );
    SDL_SetColorKey( iimage3, SDL_SRCCOLORKEY, SDL_MapRGB(iimage3->format, 255, 255, 255) );
    SDL_SetColorKey( iimage4, SDL_SRCCOLORKEY, SDL_MapRGB(iimage4->format, 255, 255, 255) );
    SDL_SetColorKey( iimage5, SDL_SRCCOLORKEY, SDL_MapRGB(iimage5->format, 255, 255, 255) );
    SDL_SetColorKey( iimage6, SDL_SRCCOLORKEY, SDL_MapRGB(iimage6->format, 255, 255, 255) );
    SDL_SetColorKey( iimage7, SDL_SRCCOLORKEY, SDL_MapRGB(iimage7->format, 255, 255, 255) );
    SDL_SetColorKey( iimage8, SDL_SRCCOLORKEY, SDL_MapRGB(iimage8->format, 255, 255, 255) );
    SDL_SetColorKey( iimage9, SDL_SRCCOLORKEY, SDL_MapRGB(iimage9->format, 255, 255, 255) );
    SDL_SetColorKey( iimage10, SDL_SRCCOLORKEY, SDL_MapRGB(iimage10->format, 255, 255, 255) );
    SDL_SetColorKey( iimage11, SDL_SRCCOLORKEY, SDL_MapRGB(iimage11->format, 255, 255, 255) );
    SDL_SetColorKey( iimage12, SDL_SRCCOLORKEY, SDL_MapRGB(iimage12->format, 255, 255, 255) );
    SDL_SetColorKey( iimage13, SDL_SRCCOLORKEY, SDL_MapRGB(iimage13->format, 255, 255, 255) );
    SDL_SetColorKey( iimage14, SDL_SRCCOLORKEY, SDL_MapRGB(iimage14->format, 255, 255, 255) );
    SDL_SetColorKey( iimage15, SDL_SRCCOLORKEY, SDL_MapRGB(iimage15->format, 255, 255, 255) );
    SDL_SetColorKey( iimage16, SDL_SRCCOLORKEY, SDL_MapRGB(iimage16->format, 255, 255, 255) );
    SDL_SetColorKey( iimage17, SDL_SRCCOLORKEY, SDL_MapRGB(iimage17->format, 255, 255, 255) );
    SDL_SetColorKey( iimage18, SDL_SRCCOLORKEY, SDL_MapRGB(iimage18->format, 255, 255, 255) );
    SDL_SetColorKey( iimage19, SDL_SRCCOLORKEY, SDL_MapRGB(iimage19->format, 255, 255, 255) );
    SDL_SetColorKey( iimage20, SDL_SRCCOLORKEY, SDL_MapRGB(iimage20->format, 255, 255, 255) );
    SDL_SetColorKey( iimage21, SDL_SRCCOLORKEY, SDL_MapRGB(iimage21->format, 255, 255, 255) );
    SDL_SetColorKey( iimage22, SDL_SRCCOLORKEY, SDL_MapRGB(iimage22->format, 255, 255, 255) );
    SDL_SetColorKey( iimage23, SDL_SRCCOLORKEY, SDL_MapRGB(iimage23->format, 255, 255, 255) );
    SDL_SetColorKey( iimage24, SDL_SRCCOLORKEY, SDL_MapRGB(iimage24->format, 255, 255, 255) );
    SDL_SetColorKey( iimage25, SDL_SRCCOLORKEY, SDL_MapRGB(iimage25->format, 255, 255, 255) );
    SDL_SetColorKey( iimage26, SDL_SRCCOLORKEY, SDL_MapRGB(iimage26->format, 255, 255, 255) );
    SDL_SetColorKey( iimage27, SDL_SRCCOLORKEY, SDL_MapRGB(iimage27->format, 255, 255, 255) );
    SDL_SetColorKey( iimage28, SDL_SRCCOLORKEY, SDL_MapRGB(iimage28->format, 255, 255, 255) );
    SDL_SetColorKey( iimage29, SDL_SRCCOLORKEY, SDL_MapRGB(iimage29->format, 255, 255, 255) );
    SDL_SetColorKey( iimage30, SDL_SRCCOLORKEY, SDL_MapRGB(iimage30->format, 255, 255, 255) );
    SDL_SetColorKey( iimage31, SDL_SRCCOLORKEY, SDL_MapRGB(iimage31->format, 255, 255, 255) );
    SDL_SetColorKey( iimage32, SDL_SRCCOLORKEY, SDL_MapRGB(iimage32->format, 255, 255, 255) );
    SDL_SetColorKey( iimage33, SDL_SRCCOLORKEY, SDL_MapRGB(iimage33->format, 255, 255, 255) );
    SDL_SetColorKey( iimage34, SDL_SRCCOLORKEY, SDL_MapRGB(iimage34->format, 255, 255, 255) );
    SDL_SetColorKey( iimage35, SDL_SRCCOLORKEY, SDL_MapRGB(iimage35->format, 255, 255, 255) );
    SDL_SetColorKey( iimage36, SDL_SRCCOLORKEY, SDL_MapRGB(iimage36->format, 255, 255, 255) );
    SDL_SetColorKey( iimage37, SDL_SRCCOLORKEY, SDL_MapRGB(iimage37->format, 255, 255, 255) );
    SDL_SetColorKey( iimage38, SDL_SRCCOLORKEY, SDL_MapRGB(iimage38->format, 255, 255, 255) );
    SDL_SetColorKey( iimage39, SDL_SRCCOLORKEY, SDL_MapRGB(iimage39->format, 255, 255, 255) );
    SDL_SetColorKey( iimage40, SDL_SRCCOLORKEY, SDL_MapRGB(iimage40->format, 255, 255, 255) );
    SDL_SetColorKey( iimage41, SDL_SRCCOLORKEY, SDL_MapRGB(iimage41->format, 255, 255, 255) );
    SDL_SetColorKey( iimage42, SDL_SRCCOLORKEY, SDL_MapRGB(iimage42->format, 255, 255, 255) );
    SDL_SetColorKey( iimage43, SDL_SRCCOLORKEY, SDL_MapRGB(iimage43->format, 255, 255, 255) );
    SDL_SetColorKey( iimage44, SDL_SRCCOLORKEY, SDL_MapRGB(iimage44->format, 255, 255, 255) );
    SDL_SetColorKey( iimage45, SDL_SRCCOLORKEY, SDL_MapRGB(iimage45->format, 255, 255, 255) );
    SDL_SetColorKey( iimage46, SDL_SRCCOLORKEY, SDL_MapRGB(iimage46->format, 255, 255, 255) );
    SDL_SetColorKey( iimage47, SDL_SRCCOLORKEY, SDL_MapRGB(iimage47->format, 255, 255, 255) );
    SDL_SetColorKey( iimage48, SDL_SRCCOLORKEY, SDL_MapRGB(iimage48->format, 255, 255, 255) );
    SDL_SetColorKey( iimage49, SDL_SRCCOLORKEY, SDL_MapRGB(iimage49->format, 255, 255, 255) );
    SDL_SetColorKey( iimage50, SDL_SRCCOLORKEY, SDL_MapRGB(iimage50->format, 255, 255, 255) );
    SDL_SetColorKey( iimage51, SDL_SRCCOLORKEY, SDL_MapRGB(iimage51->format, 255, 255, 255) );
    SDL_SetColorKey( iimage52, SDL_SRCCOLORKEY, SDL_MapRGB(iimage52->format, 255, 255, 255) );
    SDL_SetColorKey( iimage53, SDL_SRCCOLORKEY, SDL_MapRGB(iimage53->format, 255, 255, 255) );
    SDL_SetColorKey( iimage54, SDL_SRCCOLORKEY, SDL_MapRGB(iimage54->format, 255, 255, 255) );
    SDL_SetColorKey( iimage55, SDL_SRCCOLORKEY, SDL_MapRGB(iimage55->format, 255, 255, 255) );
    SDL_SetColorKey( iimage56, SDL_SRCCOLORKEY, SDL_MapRGB(iimage56->format, 255, 255, 255) );
    SDL_SetColorKey( iimage57, SDL_SRCCOLORKEY, SDL_MapRGB(iimage57->format, 255, 255, 255) );
    SDL_SetColorKey( iimage58, SDL_SRCCOLORKEY, SDL_MapRGB(iimage58->format, 255, 255, 255) );
    SDL_SetColorKey( iimage59, SDL_SRCCOLORKEY, SDL_MapRGB(iimage59->format, 255, 255, 255) );
    SDL_SetColorKey( iimage60, SDL_SRCCOLORKEY, SDL_MapRGB(iimage60->format, 255, 255, 255) );
    SDL_SetColorKey( iimage61, SDL_SRCCOLORKEY, SDL_MapRGB(iimage61->format, 255, 255, 255) );
    SDL_SetColorKey( iimage62, SDL_SRCCOLORKEY, SDL_MapRGB(iimage62->format, 255, 255, 255) );
    SDL_SetColorKey( iimage63, SDL_SRCCOLORKEY, SDL_MapRGB(iimage63->format, 255, 255, 255) );
      SDL_SetColorKey( image_oie, SDL_SRCCOLORKEY, SDL_MapRGB(image_oie->format, 255, 255, 255) );



    while(done){
            SDL_WaitEvent(&event);
switch(event.type){

case SDL_KEYDOWN:
    switch(event.key.keysym.sym)
    {
    case SDLK_ESCAPE:
        done=0;
        break;
case SDLK_KP0:
  SDL_BlitSurface(menu,NULL,screen,&pos1);
  break;
  case SDLK_KP2:

    b =chichbich(2,6);
 SDL_BlitSurface(de,NULL,screen,&pos3);
    a=s;
    s=a+b;
    break;
    case SDLK_KP1:

  SDL_BlitSurface(iimage1,NULL,screen,&image1);
    SDL_BlitSurface(iimage2,NULL,screen,&image2);
    SDL_BlitSurface(iimage3,NULL,screen,&image3);
    SDL_BlitSurface(iimage4,NULL,screen,&image4);
    SDL_BlitSurface(iimage5,NULL,screen,&image5);
    SDL_BlitSurface(iimage6,NULL,screen,&image6);
    SDL_BlitSurface(iimage7,NULL,screen,&image7);
    SDL_BlitSurface(iimage8,NULL,screen,&image8);
    SDL_BlitSurface(iimage9,NULL,screen,&image9);
    SDL_BlitSurface(iimage10,NULL,screen,&image10);
    SDL_BlitSurface(iimage11,NULL,screen,&image11);
    SDL_BlitSurface(iimage12,NULL,screen,&image12);
    SDL_BlitSurface(iimage13,NULL,screen,&image13);
    SDL_BlitSurface(iimage14,NULL,screen,&image14);
    SDL_BlitSurface(iimage15,NULL,screen,&image15);
    SDL_BlitSurface(iimage16,NULL,screen,&image16);
    SDL_BlitSurface(iimage17,NULL,screen,&image17);
    SDL_BlitSurface(iimage18,NULL,screen,&image18);
    SDL_BlitSurface(iimage19,NULL,screen,&image19);
    SDL_BlitSurface(iimage20,NULL,screen,&image20);
    SDL_BlitSurface(iimage21,NULL,screen,&image21);
    SDL_BlitSurface(iimage22,NULL,screen,&image22);
    SDL_BlitSurface(iimage23,NULL,screen,&image23);
    SDL_BlitSurface(iimage24,NULL,screen,&image24);
    SDL_BlitSurface(iimage25,NULL,screen,&image25);
    SDL_BlitSurface(iimage26,NULL,screen,&image26);
    SDL_BlitSurface(iimage27,NULL,screen,&image27);
    SDL_BlitSurface(iimage28,NULL,screen,&image28);
    SDL_BlitSurface(iimage29,NULL,screen,&image29);
    SDL_BlitSurface(iimage30,NULL,screen,&image30);
    SDL_BlitSurface(iimage31,NULL,screen,&image31);
    SDL_BlitSurface(iimage32,NULL,screen,&image32);
    SDL_BlitSurface(iimage33,NULL,screen,&image33);
    SDL_BlitSurface(iimage34,NULL,screen,&image34);
    SDL_BlitSurface(iimage35,NULL,screen,&image35);
    SDL_BlitSurface(iimage36,NULL,screen,&image36);
    SDL_BlitSurface(iimage37,NULL,screen,&image37);
    SDL_BlitSurface(iimage38,NULL,screen,&image38);
    SDL_BlitSurface(iimage39,NULL,screen,&image39);
    SDL_BlitSurface(iimage40,NULL,screen,&image40);
    SDL_BlitSurface(iimage41,NULL,screen,&image41);
    SDL_BlitSurface(iimage42,NULL,screen,&image42);
    SDL_BlitSurface(iimage43,NULL,screen,&image43);
    SDL_BlitSurface(iimage44,NULL,screen,&image44);
    SDL_BlitSurface(iimage45,NULL,screen,&image45);
    SDL_BlitSurface(iimage46,NULL,screen,&image46);
    SDL_BlitSurface(iimage47,NULL,screen,&image47);
    SDL_BlitSurface(iimage48,NULL,screen,&image48);
    SDL_BlitSurface(iimage49,NULL,screen,&image49);

    SDL_BlitSurface(iimage50,NULL,screen,&image50);
    SDL_BlitSurface(iimage51,NULL,screen,&image51);
    SDL_BlitSurface(iimage52,NULL,screen,&image52);
    SDL_BlitSurface(iimage53,NULL,screen,&image53);
    SDL_BlitSurface(iimage54,NULL,screen,&image54);
    SDL_BlitSurface(iimage55,NULL,screen,&image55);
    SDL_BlitSurface(iimage56,NULL,screen,&image56);
    SDL_BlitSurface(iimage57,NULL,screen,&image57);
    SDL_BlitSurface(iimage58,NULL,screen,&image58);
    SDL_BlitSurface(iimage59,NULL,screen,&image59);
    SDL_BlitSurface(iimage60,NULL,screen,&image60);
    SDL_BlitSurface(iimage61,NULL,screen,&image61);
    SDL_BlitSurface(iimage62,NULL,screen,&image62);
    SDL_BlitSurface(iimage63,NULL,screen,&image63);
 SDL_BlitSurface(image_oie,NULL,screen,&oie);

       oie.x=image1.x;
       oie.y=image1.y;

        //Blit les cases to screen


    //SDL_FreeSurface(imagee1);
    srandom();
//
//
//  {

//
//


if (s>63) s=a-b;

FILE *fichier = NULL;
fichier = fopen("test.txt", "w");
fprintf(fichier, "%d", s);
fclose(fichier);
 switch (s)
 {
    case 1:
    oie.x=image1.x;
    oie.y=image1.y;
    break;
case 2:

     oie.x=image2.x;
    oie.y=image2.y;
    break;
    case 3:
     oie.x=image3.x;
    oie.y=image3.y;
    break;
    case 4:
     oie.x=image4.x;
    oie.y=image4.y;
    break;
    case 5:
     oie.x=image5.x;
    oie.y=image5.y;
    break;
    case 6:
     oie.x=image6.x;
    oie.y=image6.y;
    break;
    case 7:
     oie.x=image7.x;
    oie.y=image7.y;
    break;
    case 8:
     oie.x=image8.x;
    oie.y=image8.y;
    break;
    case 9:
     oie.x=image9.x;
    oie.y=image9.y;
    break;
    case 10:
     oie.x=image10.x;
    oie.y=image10.y;
    break;
    case 11:
     oie.x=image11.x;
    oie.y=image11.y;
    break;
    case 12:
     oie.x=image12.x;
    oie.y=image12.y;
    break;
    case 13:
     oie.x=image13.x;
    oie.y=image13.y;
    break;
    case 14:
     oie.x=image14.x;
    oie.y=image14.y;
    break;
    case 15:
     oie.x=image15.x;
    oie.y=image15.y;
    break;
    case 16:
     oie.x=image16.x;
    oie.y=image16.y;
    break;
    case 17:
     oie.x=image17.x;
    oie.y=image17.y;
    break;
    case 18:
     oie.x=image18.x;
    oie.y=image18.y;
    break;
    case 19:
     oie.x=image19.x;
    oie.y=image19.y;
    break;
    case 20:
     oie.x=image20.x;
    oie.y=image20.y;
    break;
    case 21:
     oie.x=image21.x;
    oie.y=image21.y;
    break;
    case 22:
     oie.x=image22.x;
    oie.y=image22.y;
    break;
    case 23:
     oie.x=image23.x;
    oie.y=image23.y;
    break;
    case 24:
     oie.x=image24.x;
    oie.y=image24.y;
    break;
    case 25:
     oie.x=image25.x;
    oie.y=image25.y;
    break;
    case 26:
     oie.x=image26.x;
    oie.y=image26.y;
    break;
    case 27:
     oie.x=image27.x;
    oie.y=image27.y;
    break;
    case 28:
     oie.x=image28.x;
    oie.y=image28.y;
    break;
    case 29:
     oie.x=image29.x;
    oie.y=image29.y;
    break;
    case 30:
     oie.x=image30.x;
    oie.y=image30.y;
    break;
    case 31:
     oie.x=image31.x;
    oie.y=image31.y;
    break;
    case 32:
     oie.x=image32.x;
    oie.y=image32.y;
    break;
    case 33:
     oie.x=image33.x;
    oie.y=image33.y;
    break;
    case 34:
     oie.x=image34.x;
    oie.y=image34.y;
    break;
    case 35:
     oie.x=image35.x;
    oie.y=image35.y;
    break;
    case 36:
     oie.x=image36.x;
    oie.y=image36.y;
    break;
    case 37:
     oie.x=image37.x;
    oie.y=image37.y;
    break;
    case 38:
     oie.x=image38.x;
    oie.y=image38.y;
    break;
    case 39:
     oie.x=image39.x;
    oie.y=image39.y;
    break;
    case 40:
     oie.x=image40.x;
    oie.y=image40.y;
    break;
    case 41:
     oie.x=image41.x;
    oie.y=image41.y;
    break;
    case 42:
     oie.x=image42.x;
    oie.y=image42.y;
    break;
      case 43:
     oie.x=image43.x;
    oie.y=image43.y;
    break;
      case 44:
     oie.x=image44.x;
    oie.y=image44.y;
    break;
      case 45:
     oie.x=image45.x;
    oie.y=image45.y;
    break;
      case 46:
     oie.x=image46.x;
    oie.y=image46.y;
    break;
      case 47:
     oie.x=image47.x;
    oie.y=image47.y;
    break;
      case 48:
     oie.x=image48.x;
    oie.y=image48.y;
    break;
      case 49:
     oie.x=image49.x;
    oie.y=image49.y;
    break;
      case 50:
     oie.x=image50.x;
    oie.y=image50.y;
    break;
      case 51:
     oie.x=image51.x;
    oie.y=image51.y;
    break;
      case 52:
     oie.x=image52.x;
    oie.y=image52.y;
    break;
      case 53:
     oie.x=image53.x;
    oie.y=image53.y;
    break;
      case 54:
     oie.x=image54.x;
    oie.y=image54.y;
    break;
      case 55:
     oie.x=image55.x;
    oie.y=image55.y;
    break;
      case 56:
     oie.x=image56.x;
    oie.y=image56.y;
    break;
      case 57:
     oie.x=image57.x;
    oie.y=image57.y;
    break;
      case 58:
     oie.x=image58.x;
    oie.y=image58.y;
    break;
      case 59:
    oie.x=image59.x;
    oie.y=image59.y;
    break;
      case 60:
     oie.x=image60.x;
    oie.y=image60.y;
    break;
      case 61:
     oie.x=image61.x;
    oie.y=image61.y;
    break;
      case 62:
     oie.x=image62.x;
    oie.y=image62.y;
    break;
      case 63:
     oie.x=image63.x;
    oie.y=image63.y;

                    SDL_BlitSurface(gagnant,NULL,screen,&pos2);



        break;
        }





     break;
    }
break;
 }
    SDL_Flip(screen);
    }





SDL_FreeSurface(iimage1);
SDL_FreeSurface(iimage2);
SDL_FreeSurface(iimage3);
SDL_FreeSurface(iimage4);
SDL_FreeSurface(iimage5);
SDL_FreeSurface(iimage6);
SDL_FreeSurface(iimage7);
SDL_FreeSurface(iimage8);
SDL_FreeSurface(iimage9);
SDL_FreeSurface(iimage10);
SDL_FreeSurface(iimage11);
SDL_FreeSurface(iimage12);
SDL_FreeSurface(iimage13);
SDL_FreeSurface(iimage14);
SDL_FreeSurface(iimage15);
SDL_FreeSurface(iimage16);
SDL_FreeSurface(iimage17);
SDL_FreeSurface(iimage18);
SDL_FreeSurface(iimage19);
SDL_FreeSurface(iimage20);
SDL_FreeSurface(iimage21);
SDL_FreeSurface(iimage22);
SDL_FreeSurface(iimage23);
SDL_FreeSurface(iimage24);
SDL_FreeSurface(iimage25);
SDL_FreeSurface(iimage26);
SDL_FreeSurface(iimage27);
SDL_FreeSurface(iimage28);
SDL_FreeSurface(iimage29);
SDL_FreeSurface(iimage30);
SDL_FreeSurface(iimage31);
SDL_FreeSurface(iimage32);
SDL_FreeSurface(iimage33);
SDL_FreeSurface(iimage34);
SDL_FreeSurface(iimage35);
SDL_FreeSurface(iimage36);
SDL_FreeSurface(iimage37);
SDL_FreeSurface(iimage38);
SDL_FreeSurface(iimage39);
SDL_FreeSurface(iimage40);
SDL_FreeSurface(iimage41);
SDL_FreeSurface(iimage42);
SDL_FreeSurface(iimage43);
SDL_FreeSurface(iimage44);
SDL_FreeSurface(iimage45);
SDL_FreeSurface(iimage46);
SDL_FreeSurface(iimage47);
SDL_FreeSurface(iimage48);
SDL_FreeSurface(iimage49);
SDL_FreeSurface(iimage50);
SDL_FreeSurface(iimage51);
SDL_FreeSurface(iimage52);
SDL_FreeSurface(iimage53);
SDL_FreeSurface(iimage54);
SDL_FreeSurface(iimage55);
SDL_FreeSurface(iimage56);
SDL_FreeSurface(iimage57);
SDL_FreeSurface(iimage58);
SDL_FreeSurface(iimage59);
SDL_FreeSurface(iimage60);
SDL_FreeSurface(iimage61);
SDL_FreeSurface(iimage62);
SDL_FreeSurface(iimage63);
SDL_FreeSurface(menu);
SDL_FreeSurface(de);



    //Return success!

SDL_Quit();
return EXIT_SUCCESS;

}
void pause()
{
    int continuer = 1;
    SDL_Event event;
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}

int chichbich(int nb_de, int nb_faces)
{
	int i,x,res_de=0;
	for (i=0;i<nb_de;i++)
	{
	    x=((int)((rand()%nb_faces)+1));
	  //  printf("resultat lancement DE N�%d: %d\n",i+1,x);
		res_de+=x;
	}
	//printf("resultat lancement %d DEs: %d\n",nb_de,res_de);
	return res_de;
}

void srandom(void)
{
	srand(time(NULL));
}

