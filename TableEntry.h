#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

template <typename V>
using namespace std;

class TableEntry {
	public:
		/*-------------------------------------------------*/
		/*		          key  			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* El elemento clave del par.                      */
		/*                                         	   */
		/*-------------------------------------------------*/

		string key;


		/*-------------------------------------------------*/
		/*		        value			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* El elemento valor del par.                      */
		/*                      			   */
		/*-------------------------------------------------*/

		V value;


		/*-------------------------------------------------*/
		/*		      TableEntry  		   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Método constructor con el par clave->valor.     */
		/*						   */
		/*-------------------------------------------------*/

		TableEntry(string key, V value){
		}


		/*-------------------------------------------------*/
		/*		      TableEntry		   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Crea una entrada solo con clave (sin valor).    */
		/*						   */
		/*-------------------------------------------------*/

		TableEntry(string key){
		}


		/*-------------------------------------------------*/
		/*		      TableEntry		   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Crea una entrada con la clave "" (cadena vacia) */
		/* y sin valor.                                    */
		/*						   */
		/*-------------------------------------------------*/

		TableEntry(){
		}


		/*-------------------------------------------------*/
		/*		     operator==			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Sobrecarga global del operador == para          */
		/* determinar que dos instancias de TableEntry son */
		/* iguales solo si comparten la misma clave (con   */
		/* independencia del valor).			   */
		/*						   */
		/*-------------------------------------------------*/

		friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
		}


		/*-------------------------------------------------*/
                /*                   operator!=                    */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Sobrecarga global del operador != para          */
                /* determinar que dos instancias de TableEntry son */
                /* diferentes solo si sus claves son distintas     */
                /* (con independencia del valor).                  */
                /*                                                 */
                /*-------------------------------------------------*/

		friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
		}

		friend ostream&operator<<(ostream &out, const TableEntry<V> &te){
		}

};

#endif
