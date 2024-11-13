typedef struct s_cell{
    int value; //valeur de la cellule
    int next; //adresse de la cellule suivante
}t_cell;

typedef struct s_ht_list
{
    t_cell *head;   	// adresse de la première cellule
    t_cell *tail;	// adresse de la dernière cellule
} t_ht_list;


typedef struct s_node{
    int value; //valeur de la feuille
    int nb_sons=7; //nombre de fils (7 car 7 déplacements)
    t_ht_list sons; //adresses des fils
}t_node;

#ifndef MARC_STRUCT_H
#define MARC_STRUCT_H

#endif //MARC_STRUCT_H
