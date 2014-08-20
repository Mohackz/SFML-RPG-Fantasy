Voila nous devons desormais integre ma classe map (avec l'editeur et tout) dans le Game Engine de cet RPG :) ! Son utilisation est simple ! L'object principale de cet readme etait de vous montrez la nouvelle structure des fichiers map enregistre sous l'extension "lvl" (Exemple : level1.lvl) ! Meme si l'etude de cette structure s'avere peu important (puisqu'il y a l'editeur qui nous facilite la tache :p ) , mais on va comme meme essayer d'aborder le sujet . Voici sa structure (j'ai essaye de la rendre la plus simpliste possible) :

Le contenu d' une map [map.lvl] :

32 32 // Ca ces sont la taille d'un tile ( [height] [width] respectivement )
tileset.png // biensur la location du tileset
4 5 // ici on precise la taille de la map c-a-d le nombre de tile present dans la map ( [NombreDeTile_X] [NombreDeTile_Y] respectivement)
// Et enfin la map
0,2 2,0 2,0 2,0 0,2
0,2 2,0 2,0 2,0 0,2
0,2 2,0 2,0 2,0 0,2
0,2 2,0 2,0 2,0 0,2
