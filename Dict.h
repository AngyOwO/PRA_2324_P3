#ifndef DICT_H
#define DICT_H
#include <string>

template <typename V>
using namespace std;

class Dict {
	public:
		/*-------------------------------------------------*/
		/*		        insert			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Inserta el par ket->value en el diccionario.    */
		/* Lanza una excepción std::runtime_error si key   */
		/* ya existe en el diccionario.                    */
		/*						   */
		/*-------------------------------------------------*/

		void insert(string key, V value){
		}


		/*-------------------------------------------------*/
		/*			search			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Busca el valor correspondiente a key. Devuelve  */
		/* el valor value asociado si key está en el       */
		/* diccionario. Si no se encuentra, lanza una 	   */
		/* excepción std::runtime_error.                   */
		/*						   */
		/*-------------------------------------------------*/

		V search(string key){
		}


		/*-------------------------------------------------*/
		/*		        remove			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Elimina el par key->value si se encuentra en el */
		/* diccionario. Si no se encuentra, lanza una      */
		/* excepción std::runtime_error.                   */
		/*						   */
		/*-------------------------------------------------*/

		V remove(string key){
		}


		/*-------------------------------------------------*/
		/*			entries			   */
		/*-------------------------------------------------*/
		/*						   */
		/* DESCRIPCION:					   */
		/* Devuelve el número de elementos que tiene el    */
		/* diccionario.                                    */
		/*						   */
		/*-------------------------------------------------*/

		int entries(){
		}

};

#endif
