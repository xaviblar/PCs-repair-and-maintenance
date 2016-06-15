//Primer Proyecto Programado-Estructuras de datos-I Semestre 2013
//Fecha de Inicio: 21/03/2013
//Fecha Ultima modificacion: 15/04/2013
//----------------------------------------------------------------

//Incluir librerias necesarias
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

//Declaramos la clase Printer, de este tipo seran todas las impresoras usadas en el programa, se declara la variable global firstPrinter, que sera
//un puntero hacia el primer elemento de la lista de impresoras (lista simple)
class Printer
{
public:
	Printer(int Numero_Seriep,string Departmentp)
	{
	Numero_Serie=Numero_Seriep;
	Department=Departmentp;
	}
	Printer *sig;
	int getNumero_Serie()
	{
		return Numero_Serie;
	}
	string getDepartment()
	{
		return Department;
	}
	void setNumero_Serie(int Numero_Seriep)
	{
		Numero_Serie=Numero_Seriep;
	}
	void setDepartment(string Departmentp)
	{
		Department=Departmentp;
	}

private:
	int Numero_Serie;
	string Department;
}*firstPrinter;

//Se declara la clase enlacePrinter la cual servira como enlace (sublista) de la clase equipo hacia sus impresoras
class EnlacePrinter
{
public:
	Printer *enlace;
	EnlacePrinter *sig;
};

//Declaramos la clase Monitores, de este tipo seran todos las monitores usados en el programa, se declara la variable global firstMonitor
//que es un puntero hacia el primer elemento de la lista de Monitores (lista simple)
class Monitores
{
public:
	Monitores(int Numero_Seriep,string Departmentp)
	{
	Numero_Serie=Numero_Seriep;
	Department=Departmentp;
	}
	Monitores *sig;
	int getNumero_Serie()
	{
		return Numero_Serie;
	}
	string getDepartment()
	{
		return Department;
	}
	void setNumero_Serie(int Numero_Seriep)
	{
		Numero_Serie=Numero_Seriep;
	}
	void setDepartment(string Departmentp)
	{
		Department=Departmentp;
	}

private:
	int Numero_Serie;
	string Department;
}*firstMonitor;

//Se declara la clase EnlaceMonitor que funciona como enlace (sublista) del equipo hacia todos sus monitores asociados
class EnlaceMonitor
{
public:
	Monitores *enlace;
	EnlaceMonitor *sig;
};

//Declaramos la clase CPU, de este tipo seran todos las CPU usados en el programa, se declara la variable global firstCPU
//que es un puntero hacia el primer elemento de la lista de CPU's (lista simple)
class Cpu
{
public:
	Cpu( int Numero_Seriep,string Departmentp)
	{
	Numero_Serie=Numero_Seriep;
	Department=Departmentp;
	}
	Cpu *sig;
	int getNumero_Serie()
	{
		return Numero_Serie;
	}
	string getDepartment()
	{
		return Department;
	}
	void setNumero_Serie(int Numero_Seriep)
	{
		Numero_Serie=Numero_Seriep;
	}
	void setDepartment(string Departmentp)
	{
		Department=Departmentp;
	}

private:
	int Numero_Serie;
	string Department;
}*firstCpu;

//Declaramos la clase Historial_Equipo, de este tipo seran todos los mantenimientos realizados a un equipo en el programa y seran insertados
//en una sublista en su respectivo equipo
class Historial_Equipo
{
public:
	Historial_Equipo( char Fechap,double Horap,string estadop,string Tipo_Problemap,string descripcionp,int dianp,int mesp,int anhop)
	{
	Dia=Fechap;
	Hora=Horap;
	Tipo_Problema=Tipo_Problemap;
	descripcion=descripcionp;
	Estado=estadop;
	diaN=dianp;
	Mes=mesp;
	anho=anhop;
	}
	char getDia()
	{
		return Dia;
	}
	double getHora()
	{
		return Hora;
	}
	string getTipo_Problema()
	{
		return Tipo_Problema;
	}
	string getEstado()
	{
		return Estado;
	}
	string getDescripcion()
	{
		return descripcion;
	}
	int getdiaN()
	{
		return diaN;
	}
	int getMes()
	{
		return Mes;
	}
	int getAnho()
	{
		return anho;
	}

private:
	char Dia;
	double Hora;
	string Tipo_Problema;
	string Estado;
	string descripcion;
	int diaN;
	int Mes;
	int anho;
};

//Se declara la clase Historial_Equipo que funciona como sublista para guardar todos los mantenimientos realizados al respectivo equipo
class EnlaceHistorial_Equipo
{
public:
	Historial_Equipo *enlace;
	EnlaceHistorial_Equipo *sig;
};

//Declaramos la clase Equipo, de este tipo seran todos las Equipos usados en el programa, se declara la variable global firstEquipo
//que es un puntero hacia el primer elemento de la lista de Equpos (lista doblemente enlazada)
class Equipo
{
public:
	Equipo(int Numero_Seriep,string Usuariop)
	{
	Numero_Serie=Numero_Seriep;
	Usuario=Usuariop;
	}
	Equipo *sig;
	Equipo *ant=NULL;
	Cpu *suCPU=NULL;
	EnlacePrinter *suPrinter=NULL;
	EnlaceMonitor *suMonitor=NULL;
	EnlaceHistorial_Equipo *suHistorial=NULL;
	int getNumero_Serie()
	{
		return Numero_Serie;
	}
	string getUsuario()
	{
		return Usuario;
	}
	void setNumero_Serie(int Numero_Seriep)
	{
		Numero_Serie=Numero_Seriep;
	}
	void setUsuario(string Usuariop)
	{
		Usuario=Usuariop;
	}

private:
	int Numero_Serie;
	string Usuario;
}*firstEquipo;

//Declaramos la clase Horario, de este tipo seran todos las Horarios de trabajao de cada funcionario usados en el programa,
//se declara la variable global firstHorario, que es un puntero hacia el primer elemento de la lista de Monitores (lista simple)
class Horario
{
public:
	Horario( char diap,double hora_iniciop,double hora_finalp)
	{
	dia=diap;
	hora_inicio=hora_iniciop;
	hora_final=hora_finalp;
	}
	Horario *sig;
	char getDia()
	{
		return dia;
	}
	double getHora_inicio()
	{
		return hora_inicio;
	}
	double getHora_final()
	{
		return hora_final;
	}

private:
	char dia;
	double hora_inicio;
	double hora_final;

}*firstHorario;

//Se declara la clase EnlaceHorario que funciona como sublista para guardar todos los horarios del respectivo trabajador
class EnlaceHorario
{
public:
	EnlaceHorario *sig=NULL;
	Horario *enlace;
};

//Declaramos la clase Historial_Por Dia, de este tipo seran todos los mantenimientos realizados a un equipo en el programa y seran insertados
//en una sublista en su respectivo trabajador que realizo el mantenimiento;
class Historial_Por_Dia
{
public:
	Historial_Por_Dia(string descripcionp,char diap,string Estadop,double horap, string tipoProblemap, int dianP,int mesp,int anhop, int NumeroSeriep)
	{
	Dia=diap;
	Hora=horap;
	descripcion=descripcionp;
	Estado=Estadop;
	Tipo_Problema=tipoProblemap;
	diaN=dianP;
	anho=anhop;
	Mes=mesp;
	NumeroSerieEquipo=NumeroSeriep;
	}
	int getMes()
	{
		return Mes;
	}
	int getDiaN()
	{
		return diaN;
	}
	int getAnho()
	{
		return anho;
	}
	int getNumeroSerie()
	{
		return NumeroSerieEquipo;
	}
	string getDescripcion()
	{
		return descripcion;
	}
	string getTipo_Problema()
	{
	    return Tipo_Problema;
	}
private:
	char Dia;
	string Estado;
	double Hora;
	string descripcion;
	string Tipo_Problema;
	int diaN;
	int Mes;
	int anho;
	int NumeroSerieEquipo;
};

//Se declara la clase EnlaceHistorial Por Dia que funciona como sublista para guardar todos los mantenimientos que realizo
//el respectivo trabajador
class EnlaceHistorial_Por_Dia
{
public:
	Historial_Por_Dia *enlace;
	EnlaceHistorial_Por_Dia *sig;
};

//Declaramos la clase Trabajador, de este tipo seran todos los funcionarios usados en el programa, se declara la variable global
//firstTrabajador que es un puntero hacia el primer elemento de la lista de trabajadores (lista circular)
class Trabajador
{
public:
	Trabajador(int cedulap,string nombrep,string fechaNacp,char generop,string correop,string numerotelp)
	{
	cedula=cedulap;
	nombre=nombrep;
	fechaNac=fechaNacp;
	genero=generop;
	correo=correop;
	NumeroTel=numerotelp;
	}
	Trabajador *sig;
	EnlaceHorario *SuHorario=NULL;
	EnlaceHistorial_Por_Dia *SuHistorial=NULL;
	int getCedula()
	{
		return cedula;
	}
	string getNombre()
	{
		return nombre;
	}
	string getFechaNac()
	{
		return fechaNac;
	}
	char getGenero()
	{
		return genero;
	}
	string getNumeroTel()
	{
	    return NumeroTel;
	}
	string getCorreo()
	{
	    return correo;
	}
    void modificarDatos(int cedulap,string nombrep,string fechaNacp,char generop,string NumeroTelp,string correop)
	{
	    cedula=cedulap;
	    nombre=nombrep;
	    fechaNac=fechaNacp;
	    genero=generop;
	    NumeroTel=NumeroTelp;
	    correo=correop;
	}
private:
	int cedula;
	string nombre;
	string fechaNac;
	char genero;
	string NumeroTel;
	string correo;

}*firstTrabajador=NULL;

//Declaramos la clase Repuesto, de este tipo seran todos los repuestos usados en el programa, se declara la variable global
//firstRepuesto que es un puntero hacia el primer elemento de la lista de Repuestos (lista simple)
class Repuesto
{
public:
	Repuesto( string descripcionp,int id_repuestop,int stockp,int preciop)
	{
	descripcion=descripcionp;
	id_repuesto=id_repuestop;
	stock=stockp;
	precio=preciop;
	}
	Repuesto *sig;
	int getId_Repuesto()
	{
		return id_repuesto;
	}
	int getStock()
	{
		return stock;
	}
	string getDescripcion()
	{
		return descripcion;
	}
	void setStock(int cantidad)
	{
		stock+=cantidad;
	}
	void dismStock(int cantidad)
	{
		stock-=cantidad;
	}
	int getVecesUsado()
	{
	    return vecesUsado;
	}
	void AumentarVecesUsado()
	{
	    vecesUsado++;
	}
	int getPrecio()
	{
	    return precio;
	}
	void setPrecio(int preciop)
	{
	    precio=preciop;
	}
	void setNombre(string nombre)
	{
	    descripcion=nombre;
	}
	void setNumeroSerie(int NumeroSerie)
	{
	    id_repuesto=NumeroSerie;
	}

private:
	string descripcion;
	int id_repuesto;
	int stock;
	int vecesUsado=0;
	int precio;
}*firstRepuesto;

//Declaramos la clase MantePendiente, de este tipo seran todos los mantenimientos que estan pendientes de reparar, se declara la variable global
//firstMantePendiente que es un puntero hacia el primer elemento de la lista de Mantenimientos pendientes (lista doblementeEnlazada)
class MantePendiente
{
public:
	MantePendiente(int SerieRepuestop, char diap,string descripcionp,double horap,string tipoProblemap,int dianp,int mesp,int anhop,int NumeroSeriep)
	{
	Dia=diap;
	idRepuesto=SerieRepuestop;
	descripcion=descripcionp;
	Hora=horap;
	Tipo_Problema=tipoProblemap;
	diaN=dianp;
	Mes=mesp;
	anho=anhop;
	}
	MantePendiente *sig=NULL;
	MantePendiente *ant;
	char getDia()
	{
		return Dia;
	}
	string getTipoProblema()
	{
		return Tipo_Problema;
	}
	double getHora()
	{
		return Hora;
	}
	string getDescripcion()
	{
		return descripcion;
	}
	int getRepuesto()
	{
		return idRepuesto;
	}
	int getdiaN()
	{
		return diaN;
	}
	int getMes()
	{
		return Mes;
	}
	int getAnho()
	{
		return anho;
	}
	int getNumeroEquipo()
	{
		return NumeroSerieEquipo;
	}

private:
	char Dia;
	double Hora;
	string descripcion;
	string Tipo_Problema;
	int idRepuesto;
	int diaN;
	int Mes;
	int anho;
	int NumeroSerieEquipo;
}*firstMantePendiente;

//Funcion para insertar un nuevo Equipo, de tipo Class Equipo, recibe un Numero de serie y usuario, e insertar el equipo en la lista de equipos
void InsertarNuevoEquipo(int Numero_seriep,string Usuariop)
{
	Equipo *ne=new Equipo(Numero_seriep,Usuariop);
	if (firstEquipo==NULL)
	{
		firstEquipo=ne;
		ne->sig=NULL;
		cout<<"\nEl equipo se ha agregado correctamente";
		return;
	}
	else
	{
		ne->sig=firstEquipo;
		firstEquipo->ant=ne;
		firstEquipo=ne;
		cout<<"\nEl equipo se ha agregado correctamente";
		return;
	}
}

//Funcion para insertar un nuevo Trabajador, de tipo Class Trabajador, recibe un Numero de cedula, un Nombre, el genero,el correo, el numero de telefono
//y la fecha de nacimiento, e inserta al nuevo trabajador en la lista de trabajadores.
void InsertarNuevoTrabajador(int cedulap,string Nombrep,char generop,string correop, string NumeroTelp,string fechanacp)
{
	Trabajador *nt=new Trabajador(cedulap,Nombrep,fechanacp,generop,correop,NumeroTelp);

	if (firstTrabajador==NULL)
	{
		firstTrabajador=nt;
		nt->sig=nt;
		cout<<"El funcionario se ha agregado correctamente\n";
		return;
	}
	else
	{
		Trabajador *temp=firstTrabajador;
		if (firstTrabajador->getCedula()>=nt->getCedula())
		{
			temp = temp->sig;
			while( temp->sig!=firstTrabajador)
			{
				temp=temp->sig;
			}
			nt->sig=firstTrabajador;
			firstTrabajador=nt;
			temp->sig=firstTrabajador;
			cout<<"El funcionario se ha agregado correctamente\n";
			return;
		}
		else
		{
			Trabajador *temp2=firstTrabajador;
			temp=temp->sig;
			while(temp!=firstTrabajador)
			{
				if (temp->getCedula()>=nt->getCedula())
				{
					nt->sig=temp;
					temp2->sig=nt;
					cout<<"El funcionario se ha agregado correctamente\n";
					return;
				}
				temp=temp->sig;
				temp2=temp2->sig;
			}

		}
		Trabajador *temp3=firstTrabajador->sig;
		while (temp3->sig!=firstTrabajador)
		{
			temp3=temp3->sig;
		}
		nt->sig=firstTrabajador;
		temp3->sig=nt;
		cout<<"El funcionario se ha agregado correctamente\n";
		return;
	}
}

//Funcion que recibe un numero de cedula, busca al respectivo trabajador y modifica sus datos con los nuevos datos proporcionados;
void ModificarTrabajador(int cedulap1,string nombrep,int cedulap2,char generop,string numerotelp,string correop,string fechaNacp)
{
    Trabajador *temp=firstTrabajador;
    while (temp->getCedula()!=cedulap1)
    {
        temp=temp->sig;
    }
    temp->modificarDatos(cedulap2,nombrep,fechaNacp,generop,numerotelp,correop);
    cout<<"\n Los datos del funcionario se han modificado correctamente";
}

//Funcion que recibe un numero de cedula, busca al trabajador correspondiente y lo elimina de la lista de trabajadores
void eliminarTrabajador(int cedulap)
{
    Trabajador *temp=firstTrabajador;
    Trabajador *temp3=temp->sig;
    Trabajador *ultimo=temp->sig;

    if (firstTrabajador->getCedula()==cedulap)
        {
            if(temp->sig=firstTrabajador)
            {
                firstTrabajador=NULL;
                delete temp;
            }
            else
            {
                while(ultimo!=firstTrabajador)
                {
                    ultimo=ultimo->sig;
                }
                ultimo->sig=temp->sig;
                firstTrabajador=temp->sig;
                delete temp;
            }
            cout<<"\nEl trabajador ha sido eliminado correctamente";
            return;
        }

    while (true)
    {
        if (temp3->getCedula()==cedulap)
        {
            temp->sig=temp3->sig;
            delete temp3;
            return;
        }
        else
        {
            temp=temp->sig;
            temp3=temp3->sig;
        }
    }
}

//Funcion que recibe un numero de serie y un departamento y los asigna a un nuevo objeto de tipo Impresora y lo inserta en la lista de impresoras
void InsertarNuevoPrinter(int NumeroSeriep,string Departamentop)
{
	Printer *np=new Printer(NumeroSeriep,Departamentop);
	if (firstPrinter==NULL)
	{
		firstPrinter=np;
		np->sig=NULL;
	}
	else
	{
		np->sig=firstPrinter;
		firstPrinter=np;
	}
	cout<<"\nla impresora se ha agregado correctamente";
}

//Funcion que recibe dos numeros de series, de una impresora y equipo respectivamente e inserta la impresora en la sublista de impresoras del equipo
void AsociarEquipoPrinter( int NumeroSerieE, int NumeroSeriep )
{
	Printer *tempP=firstPrinter;
	Equipo *tempE=firstEquipo;
	while (tempP!=NULL)
	{
		if (tempP->getNumero_Serie()!=NumeroSeriep)
		{
			tempP=tempP->sig;
		}
		else
		{
			break;
		}
	}
	while (tempE!=NULL)
	{
		if (tempE->getNumero_Serie()!=NumeroSerieE)
		{
			tempE=tempE->sig;
		}
		else
		{
			break;
		}
	}
	EnlacePrinter *nn=new EnlacePrinter;
	nn->enlace=tempP;
	if(tempE->suPrinter==NULL)
    {
        tempE->suPrinter=nn;
        nn->sig=NULL;
    }
    else
    {
        nn->sig=tempE->suPrinter;
        tempE->suPrinter=nn;
    }
    cout<<"\nLa impresora se ha agregado correctamente al equipo";
}

//Funcion que recibe un numero de serie y un departamento y los asigna a un nuevo objeto de tipo Monitor y lo inserta en la lista de monitores
void InsertarNuevoMonitor( int NumeroSeriep,string Departamentop )
{
	Monitores *nm=new Monitores(NumeroSeriep,Departamentop);
	if (firstMonitor==NULL)
	{
		firstMonitor=nm;
		nm->sig=NULL;
	}
	else
	{
		nm->sig=firstMonitor;
		firstMonitor=nm;
	}
	cout<<"\nEl Monitor se ha agregado correctamente";
}

//Funcion que recibe un numero de serie y un departamento y los asigna a un nuevo objeto de tipo CPU y lo inserta en la lista de CPU's
void InsertarNuevoCPU(int NumeroSeriep,string Departamentop)
{
	Cpu *nc=new Cpu(NumeroSeriep,Departamentop);
	if (firstCpu==NULL)
	{
		firstCpu=nc;
		nc->sig=NULL;
	}
	else
	{
		nc->sig=firstCpu;
		firstCpu=nc;
	}
	cout<<"\nEl CPU se ha agregado correctamente";
}

//Funcion que recibe un numero de id, un departamento y los asigna a un nuevo objeto de tipo Impresora y lo inserta en la lista de impresoras
void InsertarNuevoRepuesto(string Descripcionp,int id_repuestop,int stockp,int preciop)
{
	Repuesto *nr=new Repuesto(Descripcionp,id_repuestop,stockp,preciop);
	if (firstRepuesto==NULL)
	{
		firstRepuesto=nr;
		nr->sig=NULL;
	}
	else
	{
		nr->sig=firstRepuesto;
		firstRepuesto=nr;
	}
	cout<<"\nEl repuesto se ha agregado correctamente";
}

//Funcion que recibe dos numeros de serie, de un equipo y un monitor respectivamente y agrega el monitor en la sublista de monitores del equipo
void AsociarEquipoMonitor( int NumeroSerieE,int NumeroSeriem )
{
	Monitores *tempM=firstMonitor;
	Equipo *tempE=firstEquipo;
	while (tempM!=NULL)
	{
		if (tempM->getNumero_Serie()!=NumeroSeriem)
		{
			tempM=tempM->sig;
		}
		else
		{
			break;
		}
	}
	while (tempE!=NULL)
	{
		if (tempE->getNumero_Serie()!=NumeroSerieE)
		{
			tempE=tempE->sig;
		}
		else
		{
			break;
		}
	}
	EnlaceMonitor *nn=new EnlaceMonitor;
	nn->enlace=tempM;
	if (tempE->suMonitor==NULL)
    {
        tempE->suMonitor=nn;
        nn->sig=NULL;
    }
    else
    {
    nn->sig=tempE->suMonitor;
	tempE->suMonitor=nn;
    }
	cout<<"\nEl Monitor se ha agregado correctamente al equipo";
}

//Funcion que recibe dos numeros de serie, de un equipo y un monitor respectivamente y agrega el monitor en la sublista de monitores del equipo
void AsociarEquipoCpu( int NumeroSerieE,int NumeroSeriec )
{
	Cpu *tempC=firstCpu;
	Equipo *tempE=firstEquipo;
	while (tempC!=NULL)
	{
		if (tempC->getNumero_Serie()!=NumeroSeriec)
		{
			tempC=tempC->sig;
		}
		else
		{
			break;
		}
	}
	while (tempE!=NULL)
	{
		if (tempE->getNumero_Serie()!=NumeroSerieE)
		{
			tempE=tempE->sig;
		}
		else
		{
			break;
		}
	}
	tempE->suCPU=tempC;
	cout<<"\nEl Cpu se ha agregado correctamente al equipo";
}

//Funcion que recibe un numero de serie y verifica que no exista ningun equipo con ese numero de serie (retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoEquipo(int Numero_Seriep)
{
	Equipo *temp=firstEquipo;
	while (temp!=NULL)
	{
		if (temp->getNumero_Serie()==Numero_Seriep)
		{
			return false;
		}
		temp=temp->sig;
	}
	return true;
}

//Funcion que recibe un numero de cedula y verifica que no exista ningun trabajador con ese numero de serie
//(retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoTrabajador(int cedulap)
{
	Trabajador *temp=firstTrabajador;
	do
	{
		if (temp->getCedula()==cedulap)
		{
			return false;
		}
		temp=temp->sig;
	} while (temp!=firstTrabajador);

	return true;
}

//Funcion que recibe un numero de serie y verifica que no exista ningun repuesto con ese numero de serie (retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoRepuesto(int NumeroSeriep)
{
	Repuesto *temp=firstRepuesto;
	while (temp!=NULL)
	{
		if (temp->getId_Repuesto()==NumeroSeriep)
		{
			return false;
		}
		temp=temp->sig;
	}
	return true;
}

//Funcion que recibe un numero de serie y verifica que no exista ninguna impresora con ese numero de serie
//(retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoPrinter(int NumeroSeriep)
{
	Printer *temp=firstPrinter;
	while (temp!=NULL)
	{
		if (temp->getNumero_Serie()==NumeroSeriep)
		{
			return false;
		}
		temp=temp->sig;
	}
	return true;
}

//Funcion que recibe un numero de serie y verifica que no exista ningun monitor con ese numero de serie (retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoMonitor( int NumeroSeriep )
{
	Monitores *temp=firstMonitor;
	while (temp!=NULL)
	{
		if (temp->getNumero_Serie()==NumeroSeriep)
		{
			return false;
		}
		temp=temp->sig;
	}
	return true;
}

//Funcion que recibe un numero de serie y verifica que no exista ningun CPU con ese numero de serie (retorna true si no hay ninguno y false si si existe)
bool AprobarNuevoCPU(int NumeroSeriep)
{
	Cpu *temp=firstCpu;
	while (temp!=NULL)
	{
		if (temp->getNumero_Serie()==NumeroSeriep)
		{
			return false;
		}
		temp=temp->sig;
	}
	return true;
}

//Funcion que recibe un numero de serie, busca el equipo con ese numero de serie y elimina de la lista de equipos
void BorrarEquipo( int NumeroSeriep )
{
	Equipo *temp=firstEquipo;
	while ((temp!=NULL) && (temp->getNumero_Serie()!=NumeroSeriep))
	{
		temp=temp->sig;
	}
	if (temp==firstEquipo)
	{
		firstEquipo=firstEquipo->sig;
		if(firstEquipo!=NULL)
		{
			firstEquipo->ant=NULL;
		}
	}
	else
	{
		temp->ant->sig=temp->sig;
		if (temp->sig!=NULL)
		{
			temp->sig->ant=temp->ant;

		}
	}
	delete temp;
}

//Funcion que recibe un numero de serie, busca el equipo con el mismo, y modifica sus datos con los nuevos recibidos
void ModificarEquipo( int Numero_seriep,string Usuariop, int NuevoNumeroSerie )
{
	Equipo *temp=firstEquipo;
	while (temp->getNumero_Serie()!=Numero_seriep)
	{
		temp=temp->sig;
	}
	temp->setNumero_Serie(NuevoNumeroSerie);
	temp->setUsuario(Usuariop);
	cout<<"\nEl equipo se ha modificado correctamente";
}

//Funcion que recibe un numero de cedula, busca al trabajador con el mismo y lo elimina de la lista de trabajadores
void BorrarTrabajador( int cedulap )
{
	Trabajador *temp=firstTrabajador;
	Trabajador *temp2=firstTrabajador->sig;
	Trabajador *temp3=firstTrabajador;
	while (temp->getCedula()!=cedulap)
	{
		temp=temp->sig;
		if (temp3!=temp)
		{
			temp3=temp3->sig;
		}
	}

	while (temp2->sig!=firstTrabajador)
	{
		temp2=temp2->sig;
	}

	if (temp==firstTrabajador)
	{
		firstTrabajador=firstTrabajador->sig;
		temp2->sig=firstTrabajador;
	}

	else
	{
		temp3->sig=temp->sig;
	}
	delete temp;
}

//Funcion que recibe un numero de serie, busca a la impresora con el mismo y la elimina de la lista de impresoras
void BorrarPrinter( int NumeroSeriep )
{
	Printer *temp=firstPrinter;
	Printer *temp2=firstPrinter->sig;
	if (temp->getNumero_Serie()==NumeroSeriep)
	{
		firstPrinter=temp->sig;
		delete temp;
		return;
	}
	while (temp2->getNumero_Serie()!=NumeroSeriep)
	{
		temp2=temp2->sig;
		temp=temp->sig;
	}
	temp->sig=temp2->sig;
	delete temp2;
}

//Funcion que recibe un numero de serie, busca al monitor con el mismo y lo elimina de la lista de monitores
void BorrarMonitor( int NumeroSeriep )
{
	Monitores *temp=firstMonitor;
	Monitores *temp2=firstMonitor->sig;
	if (temp->getNumero_Serie()==NumeroSeriep)
	{
		firstMonitor=temp->sig;
		delete temp;
		return;
	}
	while (temp2->getNumero_Serie()!=NumeroSeriep)
	{
		temp2=temp2->sig;
		temp=temp->sig;
	}
	temp->sig=temp2->sig;
	delete temp2;
}

//Funcion que recibe un numero de serie, busca al CPU con el mismo y lo elimina de la lista de CPU's
void BorrarCPU( int NumeroSeriep )
{
	Cpu *temp=firstCpu;
	Cpu *temp2=firstCpu->sig;
	if (temp->getNumero_Serie()==NumeroSeriep)
	{
		firstCpu=temp->sig;
		delete temp;
		return;
	}
	while (temp2->getNumero_Serie()!=NumeroSeriep)
	{
		temp2=temp2->sig;
		temp=temp->sig;
	}
	temp->sig=temp2->sig;
	delete temp2;
}

//Funcion que recibe un numero de serie, busca la impresora con el mismo, y reemplaza sus datos con los nuevos recibidos
void ModificarPrinter( int NumeroSeriep,int NuevoNumeroSerie,string Departamentop )
{
	Printer *temp=firstPrinter;
	while (temp->getNumero_Serie()!=NumeroSeriep)
	{
		temp=temp->sig;
	}
	temp->setNumero_Serie(NuevoNumeroSerie);
	temp->setDepartment(Departamentop);
	cout<<"\nLos datos se han modificado correctamente";
}

//Funcion que recibe un numero de serie, busca el monitor con el mismo, y reemplaza sus datos con los nuevos recibidos
void ModificarMonitor( int NumeroSeriep, int NuevoNumeroSerie,string Departamentop )
{
	Monitores *temp=firstMonitor;
	while (temp->getNumero_Serie()!=NumeroSeriep)
	{
		temp=temp->sig;
	}
	temp->setNumero_Serie(NuevoNumeroSerie);
	temp->setDepartment(Departamentop);
	cout<<"\nLos datos se han modificado correctamente";
}

//Funcion que recibe un numero de serie, busca el cpu con el mismo, y reemplaza sus datos con los nuevos recibidos
void ModificarCPU( int NumeroSeriep, int NuevoNumeroSerie, string Departamentop )
{
	Cpu *temp=firstCpu;
	while (temp->getNumero_Serie()!=NumeroSeriep)
	{
		temp=temp->sig;
	}
	temp->setNumero_Serie(NuevoNumeroSerie);
	temp->setDepartment(Departamentop);
	cout<<"\nlos datos se han modificado correctamente";
}

//Funcion qu recibe un numero de serie, buscar al repuesto con el mismo y lo elimina de la lista de repuestos
void BorrarRepuesto( int NumeroSeriep )
{
	Repuesto *temp=firstRepuesto;
	Repuesto *temp2=firstRepuesto->sig;
	if (temp->getId_Repuesto()==NumeroSeriep)
	{
		firstRepuesto=temp->sig;
		delete temp;
		return;
	}
	while (temp2->getId_Repuesto()!=NumeroSeriep)
	{
		temp2=temp2->sig;
		temp=temp->sig;
	}
	temp->sig=temp2->sig;
	delete temp2;
}

//Funcion que recibe un numero de cedula, un dia, una hora de inicio y una hora de salida, busca al funcionario con ese numero de cedula y le agrega
//un nuevo horario con el dia, y las horas de trabajo
void InsertarHorario(int id_trabajador,char dia,double HoraInicio, double HoraSalida )
{
	Trabajador *temp=firstTrabajador->sig;
	Horario *temp2=firstHorario;

	while(temp2!=NULL)
    {
        if ((temp2->getDia()==dia && (HoraInicio>=temp2->getHora_inicio() && HoraInicio<=temp2->getHora_final()))||(temp2->getDia()==dia &&(HoraSalida>=temp2->getHora_inicio())))
        {
            cout<<"\nEl Horario digitado choca con el horario de otro funcionario";
            return;
        }
    }

	if (firstTrabajador->getCedula()==id_trabajador)
    {
        temp=firstTrabajador;
    }

	else
		while (temp!=firstTrabajador)
		{
			if (temp->getCedula()==id_trabajador)
			{
				break;
			}
            temp=temp->sig;
		}
	Horario *nh=new Horario(dia,HoraInicio,HoraSalida);
	if (firstHorario==NULL)
	{
		firstHorario=nh;
		nh->sig=NULL;
	}
	else
	{
		nh->sig=firstHorario;
		firstHorario=nh;
	}
	EnlaceHorario *ne=new EnlaceHorario;
	ne->enlace=nh;
	if (temp->SuHorario==NULL)
	{
		temp->SuHorario=ne;
		ne->sig=NULL;
	}
	else
	{
		ne->sig=temp->SuHorario;
		temp->SuHorario=ne;
	}
	cout<<"\nEl horario de trabajo se ha agregado correctamente";
}

//Funcion que recibe una valor booleano indicando si hay un trabajador activo en ese momento, un numero de serie para el equipo a insertar el mantenimiento
//La hora y fecha en la que se esta inserttando, el trabajador activo(si lo hay) y los datos necesarios para el mantenimiento, y verifica con los datos
//Proporcionados si la averia se repara o queda pendiente (si queda pendiente la inserta en la lista de mantenimientos pendientes)
void InsertarMantenimiento(bool TrabajadorActivo,int NumeroSeriep, double horap,char datep,string tipoProblemap,string descripcionProblemap,int SerieRepuestop, int dianp, int mesp, int anhop,Trabajador *trabajadorp)
{
	bool Encontrado;
	string Estado="Pendiente";
	Equipo *temp4=firstEquipo;

	while (temp4!=NULL)
	{
		if (temp4->getNumero_Serie()!=NumeroSeriep)
		{
			temp4=temp4->sig;
		}
		else
		{
			break;
		}
	}

	if(TrabajadorActivo==true && tipoProblemap=="Hardware")
	{
		Repuesto *temp=firstRepuesto;
		while(temp->getId_Repuesto()!=SerieRepuestop)
		{
			temp=temp->sig;
		}
		if (temp->getStock()>0)
		{
			Estado="Reparado";
			temp->dismStock(1);
			temp->AumentarVecesUsado();
		}
		else
		{
			Estado="Pendiente";
		}
	}

	else if (TrabajadorActivo==true && tipoProblemap=="Software")
	{
		Estado="Reparado";
	}

	else if (TrabajadorActivo==true && tipoProblemap=="Conexion")
	{
		Estado="Reparado";
	}

	if (Estado=="Reparado")
	{
		Historial_Equipo *nhe= new Historial_Equipo(datep,horap,Estado,tipoProblemap,descripcionProblemap,dianp,mesp,anhop);
		EnlaceHistorial_Equipo *nhee= new EnlaceHistorial_Equipo;
		nhee->enlace=nhe;
		if (temp4->suHistorial==NULL)
		{
			nhee->sig=NULL;
			temp4->suHistorial=nhee;
		}
		else
		{
			nhee->sig=temp4->suHistorial;
			temp4->suHistorial=nhee;
		}

		Historial_Por_Dia *nhpd= new Historial_Por_Dia(descripcionProblemap,datep,Estado,horap,tipoProblemap,dianp,mesp,anhop,NumeroSeriep);
		EnlaceHistorial_Por_Dia *nhep= new EnlaceHistorial_Por_Dia;
		nhep->enlace=nhpd;

		if (trabajadorp->SuHistorial==NULL)
		{
			nhep->sig=NULL;
			trabajadorp->SuHistorial=nhep;
		}
		else
		{
			nhep->sig=trabajadorp->SuHistorial;
			trabajadorp->SuHistorial=nhep;
		}
		cout<<"\nSe ha reportado y reparado exitosamente su averia\n";
		return;
	}

	else
	{
		MantePendiente *nmp= new MantePendiente(SerieRepuestop,datep,descripcionProblemap,horap,tipoProblemap,dianp,mesp,anhop,NumeroSeriep);
		if (firstMantePendiente==NULL)
		{
			firstMantePendiente=nmp;
			nmp->sig=NULL;
		}
		else
		{
			nmp->sig=firstMantePendiente;
			firstMantePendiente->ant=nmp;
			firstMantePendiente=nmp;
		}
	}
	cout<<"\nSe ha reportado exitosamente su averia, sin embargo ha quedado pendiente de reparar\n";
}

//Funcion que recibe un numero de serie de repuesto y una cantidad para aumentar su stock, y los datos necesarios para insertar un mantenimiento
//en caso que exista algun mantenimiento pendiente a causa de la falta de ese repuesto.
void AgregarCantidadARepuesto(bool TrabajadorActivo,int cantidad,int NumeroSeriep,char diap, int dianp, int mesp, int anhop, double horap,Trabajador *trabajadorp)
{
	Repuesto *temp=firstRepuesto;
	MantePendiente *temp2=firstMantePendiente;
	int cont=0;
	while (temp!=NULL)
	{
		if (temp->getId_Repuesto()==NumeroSeriep)
		{
			temp->setStock(cantidad);
			return;
		}
		temp=temp->sig;
	}
	if(TrabajadorActivo==true)
	{
		while(temp2!=NULL && cont<=cantidad)
		{
			if (temp2->getTipoProblema()=="Hardware" && temp2->getRepuesto()==NumeroSeriep)
			{
				InsertarMantenimiento(TrabajadorActivo,temp2->getNumeroEquipo(),horap,diap,temp2->getTipoProblema(),temp2->getDescripcion(),NumeroSeriep,dianp,mesp,anhop,trabajadorp);
				cont+=1;
			}
			temp2=temp2->sig;
		}
	}
	cout<<"\nSe ha actualizado el stock del repuesto y se ha comprobado si existian averias pendientes de reparar con este repuesto";

}

// funcion que recibe un dia y una hora y retorna true si hay algun trabajador en ese momento o false de lo contrario
bool HayTrabajadorActivo(char diaS,double horap)
{
    Trabajador *temp2=firstTrabajador;
    if (temp2==NULL)
    {
        cout<<"\nEn estos momentos no se encuentra ningun funcionario disponible, todas las averias reportadas quedaran pendientes de reparar";
        return false;
    }
    EnlaceHorario *temp3=temp2->SuHorario;
    do{
    while (temp3!=NULL)
    {
        if((temp3->enlace->getDia()==diaS) && (temp3->enlace->getHora_inicio()<=horap) && (temp3->enlace->getHora_final()>horap))
        {
            cout<<"\nEl funcionario activo es: "<<temp2->getNombre();
            return true;
        }
        temp3=temp3->sig;
    }
    temp2=temp2->sig;
    temp3=temp2->SuHorario;
    }while (temp2!=firstTrabajador);
    cout<<"\nEn estos momentos no se encuentra ningun funcionario disponible, todas las averias reportadas quedaran pendientes de reparar";
    return false;
    }

//Funcion que recibe un dia y una hora y retorna al trabajador que esta activo en ese momento
Trabajador *TrabajadorActivoF(char diaS,double horap)
{
    Trabajador *temp2=firstTrabajador;
    EnlaceHorario *temp3=temp2->SuHorario;
    do{
    while (temp3!=NULL)
    {
        if((temp3->enlace->getDia()==diaS) && (temp3->enlace->getHora_inicio()<=horap) && (temp3->enlace->getHora_final()>horap))
        {
            return temp2;
        }
        else
        {
            temp3=temp3->sig;
        }
    }
    temp2=temp2->sig;
    temp3=temp2->SuHorario;
    }while (temp2!=firstTrabajador);
}

//Funcion imprima la informacion de todos los repuestos en la lista de repuestos
void ImprimirRepuestos()
{
    Repuesto *temp=firstRepuesto;
    while (temp!=NULL)
    {
        cout<<"\n--------------------------------------------\n";
        cout<<"\nDescripcion: "<<temp->getDescripcion();
        cout<<"\nPrecio: "<<temp->getPrecio();
        cout<<"\nNumero de Serie de repuesto: "<<temp->getId_Repuesto();
        cout<<"\nCantidad en stock: "<<temp->getStock();
        temp=temp->sig;
    }
}

//Funcion que recibe el nombre de un repuesto, lo busca y retorna su numero de id
int BuscarIdRepuesto(string desc)
{
    Repuesto *temp=firstRepuesto;
    while (temp!=NULL)
    {
        if (temp->getDescripcion()==desc)
        {
            return temp->getId_Repuesto();
        }
        else
            temp=temp->sig;
    }
}

//Funcion que recibe el nombre de un repuesto, verifica si este existe y retorna true si existe o false en caso contrario
bool existeRepuesto(string desc)
{
    Repuesto *temp=firstRepuesto;
    while (temp!=NULL)
    {
        if (temp->getDescripcion()==desc)
        {
            return true;
        }
        else
        {
           temp=temp->sig;
        }
    }
    return false;
}

//Funcion que recibe un mes e imprime a todos los trabajadores con su respectiva info personal ademas de los mantenimientos realizados en
//el mes dado
void imprimirPersonaleHistorial(int mes)
{
    Trabajador *temp=firstTrabajador;
    if (temp==NULL)
        {
        cout<<"No hay ningun funcionario registrado";
        return;
        }
    EnlaceHistorial_Por_Dia *temp2=temp->SuHistorial;

    do
    {
        cout<<"--------------------------------------------------\n";
        cout<<"Nombre: "<<temp->getNombre()<<endl;
        cout<<"Fecha de nacimiento: "<<temp->getFechaNac()<<endl;
        cout<<"Numero de cedula: "<<temp->getCedula()<<endl;
        cout<<"Genero: "<<temp->getGenero()<<endl;
        cout<<"Numero de telefono: "<<temp->getNumeroTel()<<endl;
        cout<<"Correo: "<<temp->getCorreo()<<endl<<endl;
        cout<<"Historial del mes: \n";

        if (temp2==NULL)
        {
            cout<<"Este trabajador no posee historial";
        }
        while (temp2!=NULL)
        {
            if (temp2->enlace->getMes()==mes)
            {
                cout<<"Fecha: "<<temp2->enlace->getDiaN()<<"/"<<temp2->enlace->getMes()<<"/"<<temp2->enlace->getAnho()<<endl;
                cout<<"Numero de serie del equipo: "<<temp2->enlace->getNumeroSerie()<<endl;
                cout<<"Descripcion de la averia: "<<temp2->enlace->getDescripcion()<<endl<<endl;
            }
            temp2=temp2->sig;
        }
        temp=temp->sig;
        temp2=temp->SuHistorial;
    }
    while (temp!=firstTrabajador);
}

//Funcion que recibe un numero de cedula e imprime toda la informacion del funcionario con ese numero de cedula
void imprimirPersonal(int cedulap)
{
    Trabajador *temp=firstTrabajador;

    do
    {
        if(temp->getCedula()==cedulap)
        {
        cout<<"\nInformacion actual del funcionario a modificar: \n";
        cout<<"Nombre: "<<temp->getNombre()<<endl;
        cout<<"Fecha de nacimiento: "<<temp->getFechaNac()<<endl;
        cout<<"Numero de cedula: "<<temp->getCedula()<<endl;
        cout<<"Genero: "<<temp->getGenero()<<endl;
        cout<<"Numero de telefono: "<<temp->getNumeroTel()<<endl;
        cout<<"Correo: "<<temp->getCorreo()<<endl<<endl;
        cout<<"Historial del mes: \n";
        return;
        }
    }
    while (temp!=firstTrabajador);
}

//Funcion que recibe un numero de serie, busca al equipo con ese numero de serie y lo elimina de la lista de equipos
void eliminarEquipo(int NumeroSeriep)
{
    Equipo *temp=firstEquipo;
    while (temp->getNumero_Serie()!=NumeroSeriep)
    {
        temp=temp->sig;
    }
    temp->ant->sig=temp->sig;
    temp->sig->ant=temp->ant;
    delete temp;
    cout<<"\nEl equipo se ha eliminado correctamente";
}
//Funcion que imprime todos los equipos con su respectiva informacion y equipos asociados (Impresion hacia adelante y hacia atras)
void imprimirequipos()
{
    Equipo *temp=firstEquipo;
    if (temp==NULL)
    {
        cout<<"\nNo hay equipos registrado";
        return;
    }
    EnlacePrinter *temp2=temp->suPrinter;
    EnlaceMonitor *temp3=temp->suMonitor;
    Cpu *temp4=temp->suCPU;
    while(temp->sig!=NULL)
    {
        cout<<"\n---------------------------------";
        cout<<"\nNumero de Serie: "<<temp->getNumero_Serie();
        cout<<"\nUsuario: "<<temp->getUsuario()<<endl;
        cout<<"\n\nImpresoras: ";
        if (temp2==NULL)
        {
            cout<<"\nEste equipo no posee impresoras";
        }
        while(temp2!=NULL)
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp2->enlace->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp2->enlace->getDepartment();
            temp2=temp2->sig;
        }
        cout<<"\nMonitores: ";
        if (temp3==NULL)
        {
            cout<<"\nEste Equipo no posee monitores";
        }
        while(temp3!=NULL)
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp3->enlace->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp3->enlace->getDepartment();
            temp3=temp3->sig;
        }
        cout<<"\nCpu: ";
        if (temp4==NULL)
        {
            cout<<"\nEste equipo no posee CPU";
        }
        else
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp4->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp4->getDepartment();
        }
        temp=temp->sig;
    }
    cout<<"\n---------------------------------";
    cout<<"\nNumero de Serie: "<<temp->getNumero_Serie();
    cout<<"\nUsuario: "<<temp->getUsuario()<<endl;
    cout<<"\n\nImpresoras: ";
    if (temp2==NULL)
    {
        cout<<"\nEste equipo no posee impresoras";
    }
    while(temp2!=NULL)
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp2->enlace->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp2->enlace->getDepartment();
        temp2=temp2->sig;
    }
    cout<<"\nMonitores: ";
    if (temp3==NULL)
    {
        cout<<"\nEste Equipo no posee monitores";
    }
    while(temp3!=NULL)
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp3->enlace->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp3->enlace->getDepartment();
        temp3=temp3->sig;
    }
    cout<<"\nCpu: ";
    if (temp4==NULL)
    {
        cout<<"\nEste equipo no posee CPU";
    }
    else
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp4->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp4->getDepartment();
    }
    cout<<"\n\n------Impresion hacia atras--------\n\n";
    cout<<"\n---------------------------------";
    cout<<"\nNumero de Serie: "<<temp->getNumero_Serie();
    cout<<"\nUsuario: "<<temp->getUsuario()<<endl;
    cout<<"\n\nImpresoras: ";
    if (temp2==NULL)
    {
        cout<<"\nEste equipo no posee impresoras";
    }
    while(temp2!=NULL)
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp2->enlace->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp2->enlace->getDepartment();
        temp2=temp2->sig;
    }
    cout<<"\nMonitores: ";
    if (temp3==NULL)
    {
        cout<<"\nEste Equipo no posee monitores";
    }
    while(temp3!=NULL)
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp3->enlace->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp3->enlace->getDepartment();
        temp3=temp3->sig;
    }
    cout<<"\nCpu: ";
    if (temp4==NULL)
    {
        cout<<"\nEste equipo no posee CPU";
    }
    else
    {
        cout<<"\n------------------------------";
        cout<<"\nNumero de serie: "<<temp4->getNumero_Serie();
        cout<<"\nDepartamento: "<<temp4->getDepartment();
    }
    temp=temp->ant;
    while(temp!=NULL)
    {
        cout<<"\n---------------------------------";
        cout<<"\nNumero de Serie: "<<temp->getNumero_Serie();
        cout<<"\nUsuario: "<<temp->getUsuario()<<endl;
        cout<<"\n\nImpresoras: ";
        if (temp2==NULL)
        {
            cout<<"\nEste equipo no posee impresoras";
        }
        while(temp2!=NULL)
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp2->enlace->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp2->enlace->getDepartment();
            temp2=temp2->sig;
        }
        cout<<"\nMonitores: ";
        if (temp3==NULL)
        {
            cout<<"\nEste Equipo no posee monitores";
        }
        while(temp3!=NULL)
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp3->enlace->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp3->enlace->getDepartment();
            temp3=temp3->sig;
        }
        cout<<"\nCpu: ";
        if (temp4==NULL)
        {
            cout<<"\nEste equipo no posee CPU";
        }
        else
        {
            cout<<"\n------------------------------";
            cout<<"\nNumero de serie: "<<temp4->getNumero_Serie();
            cout<<"\nDepartamento: "<<temp4->getDepartment();
        }
        temp=temp->ant;
    }
}

void imprimirEquipo(int NumeroSerieP)
{
    Equipo *temp=firstEquipo;
    while (temp->getNumero_Serie()!=NumeroSerieP)
    {
        temp=temp->sig;
    }
    cout<<"\nInformacion actual: ";
    cout<<"\nNumero de Serie: "<<temp->getNumero_Serie();
    cout<<"\nUsuario: "<<temp->getUsuario()<<endl;
}

//Funcion que recibe un numero de serie y busca el cpu con este e imprime los datos de el mismo.
void imprimirCPU(int numeroSeriep)
{
    Cpu *temp=firstCpu;
    while (temp->getNumero_Serie()!=numeroSeriep)
    {
        temp=temp->sig;
    }
    cout<<"\nInformacion actual: ";
    cout<<"\nNumero de serie: "<<temp->getNumero_Serie();
    cout<<"\nDepartamento: "<<temp->getDepartment();
}

//Funcion que recibe un numero de serie y busca la impresora con este e imprime los datos de la mismo.
void imprimirPrinter(int numeroSeriep)
{
    Printer *temp=firstPrinter;
    while (temp->getNumero_Serie()!=numeroSeriep)
    {
        temp=temp->sig;
    }
    cout<<"\nInformacion actual: ";
    cout<<"\nNumero de serie: "<<temp->getNumero_Serie();
    cout<<"\nDepartamento: "<<temp->getDepartment();
}

//Funcion que recibe un numero de serie y busca el monitor con este e imprime los datos de el mismo.
void imprimirMonitor(int numeroSeriep)
{
    Monitores *temp=firstMonitor;
    while (temp->getNumero_Serie()!=numeroSeriep)
    {
        temp=temp->sig;
    }
    cout<<"\nInformacion actual: ";
    cout<<"\nNumero de serie: "<<temp->getNumero_Serie();
    cout<<"\nDepartamento: "<<temp->getDepartment();
}

//Funcion que recibe un numero de serie, busca el monitor con el mismo y lo elimina de la lista de monitores
void eliminarMonitor(int numeroserie)
{
    Monitores *temp=firstMonitor;
    Monitores *temp2=temp->sig;
    if (firstMonitor->getNumero_Serie()==numeroserie)
    {
        firstMonitor=temp->sig;
        delete temp;
    }
    else
    {
        while(temp2->getNumero_Serie()!=numeroserie)
        {
            temp2=temp2->sig;
            temp=temp->sig;
        }
        temp->sig=temp2->sig;
        delete temp2;
    }
    cout<<"\nEl monitor se ha eliminado correctamente";
}

//Funcion que recibe un numero de serie, busca la impresora con el mismo y la elimina de la lista de impresoras
void eliminarPrinter(int numeroserie)
{
    Printer *temp=firstPrinter;
    Printer *temp2=temp->sig;
    if (firstPrinter->getNumero_Serie()==numeroserie)
    {
        firstPrinter=temp->sig;
        delete temp;
    }
    else
    {
        while(temp2->getNumero_Serie()!=numeroserie)
        {
            temp2=temp2->sig;
            temp=temp->sig;
        }
        temp->sig=temp2->sig;
        delete temp2;
    }
    cout<<"\nLa impresora se ha eliminado correctamente";
}

//Funcion que recibe un numero de serie, busca el cpu con el mismo y lo elimina de la lista de CPU's
void eliminarCpu(int numeroserie)
{
    Cpu *temp=firstCpu;
    Cpu *temp2=temp->sig;
    if (firstCpu->getNumero_Serie()==numeroserie)
    {
        firstCpu=temp->sig;
        delete temp;
    }
    else
    {
        while(temp2->getNumero_Serie()!=numeroserie)
        {
            temp2=temp2->sig;
            temp=temp->sig;
        }
        temp->sig=temp2->sig;
        delete temp2;
    }
    cout<<"\nEl CPU se ha eliminado correctamente";
}

//Funcion que recibe un numero de serie, busca el repuesto con el mismo y lo elimina de la lista de repuestos
void EliminarRepuesto(int NumeroSeriep)
{
    Repuesto *temp=firstRepuesto;
    Repuesto *temp2=temp->sig;
    if(firstRepuesto->getId_Repuesto()==NumeroSeriep)
    {
        firstRepuesto=temp->sig;
        delete temp;
    }
    else
    {
        while (temp2!=NULL)
        {
            if (temp2->getId_Repuesto()==NumeroSeriep)
            {
                temp->sig=temp2->sig;
                delete temp2;
                cout<<"\nEl repuesto ha sido eliminado correctamente";
                return;
            }
            temp2=temp2->sig;
            temp=temp->sig;
        }
    }
}

//Funcion que recibe un numero de serie, busca al equipo con este numero de serie e imprime todo su historial
void ImprimirHistorialEquipo(int NumeroSerie)
{
    Equipo *temp=firstEquipo;
    while (temp!=NULL)
    {
        if(temp->getNumero_Serie()==NumeroSerie)
        {
            break;
        }
        temp=temp->sig;
    }
    EnlaceHistorial_Equipo *temp2=temp->suHistorial;
    if(temp2==NULL)
    {
        cout<<"\nEl equipo no ha reportado averias";
        return;
    }
    while(temp2!=NULL)
    {
        cout<<"\n---------------------------------------\n";
        cout<<"Fecha: "<<temp2->enlace->getdiaN()<<"/"<<temp2->enlace->getMes()<<"/"<<temp2->enlace->getAnho()<<endl;
        cout<<"Descripcion de la averia: "<<temp2->enlace->getDescripcion()<<endl;
        cout<<"Tipo de problema: "<<temp2->enlace->getTipo_Problema()<<endl;
        cout<<"Estado: "<<temp2->enlace->getEstado()<<endl;
        temp2=temp2->sig;
    }

}

//Funcion que compara los historiales de cada equipo y determina cual es el que ha recibido mas mantenimientos y lo imprime
void equipoMasMantenimiento()
{
    Equipo *temp=firstEquipo;
    Equipo *MasMante=firstEquipo;
    int cont=0;
    int mayor=0;
    if (temp==NULL)
    {
        cout<<"\nNo hay equipos registrados";
        return;
    }
    EnlaceHistorial_Equipo *temp2=temp->suHistorial;
    while(temp!=NULL)
    {
        temp2=temp->suHistorial;
        while(temp2!=NULL)
        {
            cont++;
            temp2=temp2->sig;
        }
        if(cont>=mayor)
        {
            mayor=cont;
            MasMante=temp;
        }
        cont=0;
        temp=temp->sig;
    }
    if (mayor>0)
    {
        cout<<"\nEl equipo que ha recibido mas mantenimientos es: ";
        cout<<"\nNumero de serie: "<<MasMante->getNumero_Serie();
        cout<<"\nUsuario: "<<MasMante->getUsuario();
    }
    else
    {
        cout<<"\nNingun equipo reporta mantenimientos";
    }
}

//Funcion que recibe un numero de serie, busca el repuesto con este e imprime los datos de este.
void ImprimirUnRepuesto(int NumeroSeriep)
{
    Repuesto *temp=firstRepuesto;
    while (temp->getId_Repuesto()!=NumeroSeriep)
    {
        temp=temp->sig;
    }
    system("cls");
    cout<<"\nInformacion actual del repuesto: ";
    cout<<"\nNombre: "<<temp->getDescripcion();
    cout<<"\nPrecio: "<<temp->getPrecio();
    cout<<"\nNumero de serie: "<<temp->getId_Repuesto();
}

//Funcion que recibe un numero de cedula, busca el trabajador con este e imprime sus datos
void imprimirHistorialTrabajador(int cedulap)
{
    Trabajador *temp=firstTrabajador;
    if (temp==NULL)
        {
        cout<<"No hay ningun funcionario registrado";
        return;
        }
    do
    {
        if (temp->getCedula()==cedulap)
        {
            break;
        }
        temp=temp->sig;
    }
    while (temp!=firstTrabajador);
    EnlaceHistorial_Por_Dia *temp2=temp->SuHistorial;

    if (temp2==NULL)
    {
        cout<<"\nEste trabajador no posee historial";
    }
    while (temp2!=NULL)
    {
            cout<<"Fecha: "<<temp2->enlace->getDiaN()<<"/"<<temp2->enlace->getMes()<<"/"<<temp2->enlace->getAnho()<<endl;
            cout<<"Numero de serie del equipo: "<<temp2->enlace->getNumeroSerie()<<endl;
            cout<<"Tipo de problema: "<<temp2->enlace->getTipo_Problema()<<endl;
            cout<<"Descripcion de la averia: "<<temp2->enlace->getDescripcion()<<endl;
            temp2=temp2->sig;
    }
}

//Funcion que comprueba cual trabajador realizo mas mantenimientos en un determinado dia
void TrabajadorMasManteUnDia(int dia, int mes, int anho)
{
    Trabajador *temp=firstTrabajador;
    Trabajador *MasMante=firstTrabajador;
    int cont=0;
    int mayor=0;
    if (temp==NULL)
    {
        cout<<"\nNo hay trabajadores registrados";
        return;
    }
    EnlaceHistorial_Por_Dia *temp2=temp->SuHistorial;
    while(temp2!=NULL)
    {
        if(temp2->enlace->getDiaN()==dia && temp2->enlace->getMes()==mes)
        {
            cont++;
        }
        temp2=temp2->sig;
    }
    if(cont>mayor)
    {
        mayor=cont;
        MasMante=temp;
    }
    temp=temp->sig;
    while(temp!=firstTrabajador)
    {
        EnlaceHistorial_Por_Dia *temp2=temp->SuHistorial;
        while(temp2!=NULL)
        {
            if(temp2->enlace->getDiaN()==dia && temp2->enlace->getMes()==mes && temp2->enlace->getAnho()==anho)
            {
                cont++;
            }
            temp2=temp2->sig;
        }
        if(cont>mayor)
        {
            mayor=cont;
            MasMante=temp;
        }
        temp=temp->sig;
    }
    if (mayor>0)
    {
        cout<<"\nEl trabajador que realizo mas mantenimientos ese dia fue: "<<MasMante->getNombre()<<"  Cedula: "<<temp->getCedula();
    }
    else
    {
        cout<<"\nNingun trabajador realizo mantenimientos ese dia";
    }
}

//Funcion que imprime la informacion de todos elementos de la lista de mantenimientos pendientes
void ImprimirMantesPendientes()
{
    MantePendiente *temp=firstMantePendiente;
    if (temp==NULL)
    {
        cout<<"\nNo hay averias pendientes de reparar";
        return;
    }
    while(temp!=NULL)
    {
        cout<<"\n--------------------------------------------";
        cout<<"\nTipo de Problema: "<<temp->getTipoProblema();
        cout<<"\nFecha: "<<temp->getdiaN()<<"/"<<temp->getMes()<<"/"<<temp->getAnho();
        cout<<"\nDescripcion del Problema:"<<temp->getDescripcion();
        temp=temp->sig;
    }
}

//Funcion que compruba cual es el tipo de problema mas frecuente y lo imprime
void ProblemaMasFrecuente()
{
    Equipo *temp=firstEquipo;
    int Software=0;
    int Hardware=0;
    int Conexion=0;
    if(temp==NULL)
    {
        cout<<"\nNo hay averias reportadas";
        return;
    }
    while(temp!=NULL)
    {
        EnlaceHistorial_Equipo *temp2=temp->suHistorial;
        while(temp2!=NULL)
        {
            if(temp2->enlace->getTipo_Problema()=="Hardware")
            {
                Hardware++;
            }
            else if(temp2->enlace->getTipo_Problema()=="Software")
            {
                Software++;
            }
            else
            {
                Conexion++;
            }
            temp2=temp2->sig;
        }
        temp=temp->sig;
    }
    if (Hardware>0 || Conexion>0 || Software>0)
    {
        if(Hardware>=Conexion &&Hardware>=Software)
        {
            cout<<"\nEl tipo de problema mas frecuente es de Hardware";
            return;
        }
        else if(Conexion>=Hardware && Conexion>=Software)
        {
            cout<<"\nEl tipo de problema mas frecuente es de Conexion";
            return;
        }
        else if(Software>=Hardware && Software>=Conexion)
        {
            cout<<"\nEl tipo de problema mas frecuente es de Software";
            return;
        }
    }
    else
    {
        cout<<"\nNo hay averias reportadas";
    }
}

//Funcion que comprueba cual es el repuesto que ha sido cambiado mas veces y lo imprime
void RepuestoMasUsado()
{
    Repuesto *temp=firstRepuesto;
    Repuesto *MasUsado=firstRepuesto;
    int mayor=0;
    if (temp==NULL)
    {
        cout<<"\nNo hay repuestos registrados";
        return;
    }
    while(temp!=NULL)
    {
        if(temp->getVecesUsado()>=mayor)
        {
            mayor=temp->getVecesUsado();
            MasUsado=temp;
        }
        temp=temp->sig;
    }
    if (mayor>0)
    {
        cout<<"\nEl repuesto mas utilizado es: "<<MasUsado->getDescripcion();
        return;
    }
    else
    {
        cout<<"\nNo se ha utilizado ningun repuesto";
    }
}

//Funcion que recibe un numero de serie, busca el repuesto con este y reemplaza sus datos con los nuevos proporcionados
void ModificarRepuesto(int NumeroSerie,int nuevoNumeroSerie,int preciop,string nombre)
{
    Repuesto *temp=firstRepuesto;
    while(temp->getId_Repuesto()!=NumeroSerie)
    {
        temp=temp->sig;
    }
    temp->setPrecio(preciop);
    temp->setNombre(nombre);
    temp->setNumeroSerie(nuevoNumeroSerie);
    cout<<"\nEl repuesto se ha modificado exitosamente";
}

//Funcion que inserta las averias pendientes de reparar cada vez que ingresa un trabajador
void MeterMantesPendientes(bool HayTrabajador,Trabajador *trabajadorp,double horap,int dias,int diam,int mesp,int anhop)
{
    MantePendiente *temp=firstMantePendiente;
    if(temp==NULL)
    {
        return;
    }
    while (temp!=NULL)
    {
        InsertarMantenimiento(HayTrabajador,temp->getNumeroEquipo(),horap,dias,temp->getTipoProblema(),temp->getDescripcion(),temp->getRepuesto(),diam,mesp,anhop,trabajadorp);
        temp=temp->sig;
    }
}
 //Funcion principal donde se desarrolla el modo consola y se imprimen y reciben datos de parte del usuario
int main()
{
    Trabajador *TrabajadorActivo=NULL;
    string tecla;
    bool HayTrabajador=false;
    char DiaSemana;
    int DiaMes;
    int Mes;
    int mes2;
    int Anho;
    int Anho2;
    double Hora;
    int opcion;
    int NumeroSerieEquipo;
    string TipoProblema;
    string DescripcionProblema;
    string RepuestoP;
    string Nombrep;
    int cedulap;
    string fechaNacp;
    string correop;
    string NumeroTelp;
    char generop;
    int cedulap2;
    char dia2;
    int dia3;
    double horaInicio;
    double horaFinal;
    string Usuariop;
    string departamentop;
    int NumeroSerie2;
    int preciop;
    int stock;
    InsertarNuevoTrabajador(123,"Xavier Blanco",'M',"xaviblar@gmail.com","87552695","19/08/1993");
    InsertarHorario(123,'L',11.00,19.00);
    InsertarNuevoCPU(1234,"Computacion");
    InsertarNuevoPrinter(111,"Computacion");
    InsertarNuevoMonitor(101,"Computacion");
    InsertarNuevoEquipo(1101,"Xavier");
    InsertarNuevoEquipo(147,"Holga");
    AsociarEquipoCpu(1101,1234);
    AsociarEquipoMonitor(1101,101);
    AsociarEquipoPrinter(1101,111);
    InsertarNuevoRepuesto("Tarjeta Madre",124,4,24000);
    InsertarNuevoRepuesto("Modem",11011,3,5000);
    system("cls");

	while (true)
    {
        salto2:
        cout<<"--------------------------------------------------------------\n";
        cout<<"          Reparacion y Mantenimiento de Computadores\n";
        cout<<"                          Bienvenido \n";
        cout<<"--------------------------------------------------------------\n";
        cout<<"Digite el dia de la semana (L,K,M,J,V,S): ";
        cin>>DiaSemana;
        cout<<"\nDigite el dia del mes (dd): ";
        cin>>DiaMes;
        cout<<"\nDigite el mes (mm): ";
        cin>>Mes;
        cout<<"\nDigite el anho (aaaa): ";
        cin>>Anho;
        cout<<"\nDigite la hora actual (hh.mm): ";
        cin>>Hora;
        HayTrabajador=HayTrabajadorActivo(DiaSemana,Hora);
        if (HayTrabajador==true)
        {
            TrabajadorActivo=TrabajadorActivoF(DiaSemana,Hora);
        }
        if(HayTrabajador==true)
        {
            MeterMantesPendientes(HayTrabajador,TrabajadorActivo,Hora,DiaSemana,DiaMes,Mes,Anho);
        }
        cout<<"\nPresiona una tecla para continuar";
        cin>>tecla;
        system("cls");

        while (true)
        {
            salto:
            cout<<"--------------------------------------------------------------------------------\n";
            cout<<"                Menu Principal";
            cout<<"\nDigite 1 si desea Reportar una nueva Averia \nDigite 2 para ver y modificar la informacion de los funcionarios\n";
            cout<<"Digite 3 para ver y modificar la informacion de los equipos\nDigite 4 para ver y modificar la informacion de Repuestos \nDigite 5 si desea hacer una consulta\n";
            cout<<"Digite cualquier otro numero para salir al menu de Fecha y Hora\n";
            cout<<"--------------------------------------------------------------------------------\n";
            cin>>opcion;
            if (opcion==1)
            {
                    system("cls");
                    cout<<"Digite el numero de serie del equipo a reportar: ";
                    cin>>NumeroSerieEquipo;
                    if (AprobarNuevoEquipo(NumeroSerieEquipo)==false)
                    {
                        cout<<"\nDigite el tipo de problema (Software,Hardware o Conexion): ";
                        cin>>TipoProblema;
                        if (TipoProblema=="Software" || TipoProblema=="Hardware" || TipoProblema=="Conexion")
                        {
                            if(TipoProblema=="Hardware")
                            {
                                cout<<"Digite el repuesto necesario (Puede consultar la lista de repuestos en menu principal->Repuestos): ";
                                cin>>RepuestoP;
                                if (existeRepuesto(RepuestoP)==false)
                                {
                                    cout<<"\nEl repuesto digitado no existe, vaya a Menu Principal->Repuestos para ver los repuestos disponibles o agregar nuevos";
                                    cout<<"\nPresiona una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                    goto salto;
                                }
                            }
                            getline(cin,DescripcionProblema);
                            cout<<"\nDigite la descripcion del problema: ";
                            getline(cin,DescripcionProblema);
                            InsertarMantenimiento(HayTrabajador,NumeroSerieEquipo,Hora,DiaSemana,TipoProblema,DescripcionProblema,BuscarIdRepuesto(RepuestoP),DiaMes,Mes,Anho,TrabajadorActivo);
                        }
                        else
                        {
                            cout<<"\nHa digitado un tipo de problema invalido";
                            cout<<"\nPresiona una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else
                    {
                        cout<<"\nNo existe ningun equipo con ese numero de serie";
                        cout<<"\nDigite una tecla para continuar";
                        cin>>tecla;
                        system("cls");
                    }

            }
            else if (opcion==2)
            {
                while (true)
                {
                    cout<<"Digite 1 para mostrar todos los funcionarios con su respectivo historial mensual";
                    cout<<"\nDigite 2 para agregar un nuevo funcionario";
                    cout<<"\nDigite 3 para modificar los datos de un funcionario";
                    cout<<"\nDigite 4 para eliminar un funcionario";
                    cout<<"\nDigite 5 para agregar un horario de trabajo a un funcionario";
                    cout<<"\nDigite cualquier otro numero para volver al menu principal";
                    cout<<endl;
                    cin>>opcion;
                    if (opcion==1)
                    {
                        system("cls");
                        imprimirPersonaleHistorial(Mes);
                        cout<<"\nDigite una tecla para continuar";
                        cin>>tecla;
                        system("cls");
                    }
                    else if(opcion==2)
                    {
                        system("cls");
                        getline(cin,Nombrep);
                        cout<<"\nDigite el nombre: ";
                        getline(cin,Nombrep);
                        cout<<"\nDigite el numero de cedula: ";
                        cin>>cedulap;
                        if (AprobarNuevoTrabajador(cedulap)==true)
                        {
                            cout<<"\nDigite la fecha de nacimiento: ";
                            cin>>fechaNacp;
                            cout<<"\nDigite el genero: ";
                            cin>>generop;
                            cout<<"\nDigite el numero de telefono: ";
                            cin>>NumeroTelp;
                            cout<<"\nDigite el correo: ";
                            cin>>correop;
                            InsertarNuevoTrabajador(cedulap,Nombrep,generop,correop,NumeroTelp,fechaNacp);
                            cout<<"Digite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if (AprobarNuevoTrabajador(cedulap)==false)
                            {
                                cout<<"\nEl numero de cedula ingresado ya pertenece a un funcionario";
                                cout<<"Digite una tecla para continuar";
                            	cin>>tecla;
                            	system("cls");
                            }
                    }
                    else if(opcion==3)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de cedula del funcionario al que desea modificar: ";
                        cin>>cedulap;
                        if (AprobarNuevoTrabajador(cedulap)==false)
                        {
                            imprimirPersonal(cedulap);
                            getline(cin,Nombrep);
                            cout<<"\nDigite el nombre: ";
                            getline(cin,Nombrep);
                            cout<<"\nDigite el numero de cedula: ";
                            cin>>cedulap2;
                            if (AprobarNuevoTrabajador(cedulap2)==true)
                            {
                                cout<<"\nDigite la fecha de nacimiento: ";
                                cin>>fechaNacp;
                                cout<<"\nDigite el genero: ";
                                cin>>generop;
                                cout<<"\nDigite el numero de telefono: ";
                                cin>>NumeroTelp;
                                cout<<"\nDigite el correo: ";
                                cin>>correop;
                                ModificarTrabajador(cedulap,Nombrep,cedulap2,generop,NumeroTelp,correop,fechaNacp);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }

                        }
                        else if(AprobarNuevoTrabajador(cedulap)==true)
                        {
                            cout<<"\nNo se ha encontrado ningun funcionario con el numero de cedula brindado\n";
                            cout<<"Digite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==4)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de cedula del funcionario al que desea eliminar: ";
                        cin>>cedulap;
                        if (AprobarNuevoTrabajador(cedulap)==false)
                        {
                            eliminarTrabajador(cedulap);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");

                        }
                        else
                        {
                            cout<<"\nNo existe ningun funcionario con el numero de cedula digitado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==5)
                    {
                        system("cls");
                        cout<<"Digite el numero de cedula del funcionario al cual desea agregar un horario";
                        cin>>cedulap;
                        if (AprobarNuevoTrabajador(cedulap)==false)
                        {
                            cout<<"\nDigite el dia de la semana (L,K,M,J,V,S): ";
                            cin>>dia2;
                            cout<<"\nDigite la hora de inicio: ";
                            cin>>horaInicio;
                            cout<<"\nDigite la de salida: ";
                            cin>>horaFinal;
                            InsertarHorario(cedulap,dia2,horaInicio,horaFinal);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nNo existe ningun funcionario con el numero de cedula digitado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else if(opcion==3)
            {
                while (true)
                {
                    cout<<"Digite 1 si desea agregar un nuevo equipo";
                    cout<<"\nDigite 2 si desea eliminar un equipo";
                    cout<<"\nDigite 3 si desea modificar la informacion de un equipo";
                    cout<<"\nDigite 4 si desea modificar la informacion de un CPU";
                    cout<<"\nDigite 5 si desea modificar la informacion de una impresora";
                    cout<<"\nDigite 6 si desea modificar la informacion de un monitor";
                    cout<<"\nDigite 7 si desea eliminar un monitor";
                    cout<<"\nDigite 8 si desea eliminar una impresora";
                    cout<<"\nDigite 9 si desea eliminar un cpu";
                    cout<<"\nDigite 10 si desea agregar un monitor";
                    cout<<"\nDigite 11 si desea agregar una impresora";
                    cout<<"\nDigite 12 si desea agregar un cpu";
                    cout<<"\nDigite cualquier otro numero para volver al menu principal";
                    cout<<endl;
                    cin>>opcion;
                    if (opcion==1)
                    {
                        cout<<"\nDigite el numero de serie del equipo: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoEquipo(NumeroSerieEquipo)==true)
                        {
                            getline(cin,Usuariop);
                            cout<<"\nDigite el nombre del usuario al que se le asignara: ";
                            getline(cin,Usuariop);
                            InsertarNuevoEquipo(NumeroSerieEquipo,Usuariop);
                            cout<<"\nDigite 1 si desea agregar un nuevo CPU al equipo o cualquier otra tecla para continuar ";
                            cin>>opcion;
                            if (opcion==1)
                            {
                                cout<<"\nDigite el numero de serie del CPU: ";
                                cin>>NumeroSerie2;
                                if (AprobarNuevoCPU(NumeroSerie2)==true)
                                {
                                    cout<<"\nDigite el departamento: ";
                                    cin>>departamentop;
                                    InsertarNuevoCPU(NumeroSerie2,departamentop);
                                    AsociarEquipoCpu(NumeroSerieEquipo,NumeroSerie2);
                                }
                                else
                                {
                                    cout<<"\nEl numero de serie digitado ya pertenece a otro CPU, vaya a Modificar Equipos para agregar un cpu";
                                }

                            }
                            cout<<"\nDigite 1 si desea agregar una nueva impresora al equipo o cualquier otra tecla para continuar ";
                            cin>>opcion;
                            if (opcion==1)
                            {
                                cout<<"\nDigite en numero de serie de la impresora: ";
                                cin>>NumeroSerie2;
                                if (AprobarNuevoPrinter(NumeroSerie2)==true)
                                {
                                    cout<<"\nDigite el departamento: ";
                                    cin>>departamentop;
                                    InsertarNuevoPrinter(NumeroSerie2,departamentop);
                                    AsociarEquipoPrinter(NumeroSerieEquipo,NumeroSerie2);
                                }
                                else
                                {
                                    cout<<"\nEl numero de serie digitado ya pertenece a otra impresora, vaya a Modificar Equipos para agregar una impresora";
                                }
                            }
                            cout<<"\nDigite 1 si desea agregar un monitor al equipo o cualquier otra tecla para continuar ";
                            cin>>opcion;
                            if (opcion==1)
                            {
                                cout<<"\nDigite en numero de serie del monitor: ";
                                cin>>NumeroSerie2;
                                if (AprobarNuevoMonitor(NumeroSerie2)==true)
                                {
                                    cout<<"\nDigite el departamento: ";
                                    cin>>departamentop;
                                    InsertarNuevoMonitor(NumeroSerie2,departamentop);
                                    AsociarEquipoMonitor(NumeroSerieEquipo,NumeroSerie2);
                                }
                                else
                                {
                                    cout<<"\nEl numero de serie digitado ya pertenece a otro monitor, vaya a Modificar Equipos para agregar un monitor";
                                }
                            }
                            cout<<"\nEl equipo y sus componentes se han agregado correctamente";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie digitado ya pertenece a un equipo registrado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==2)
                    {
                        cout<<"\nDigite el numero de serie del equipo que desea eliminar: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoEquipo(NumeroSerieEquipo)==false)
                        {
                            eliminarEquipo(NumeroSerieEquipo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie ingresado no pertenece a ningun equipo";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==3)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de serie del equipo que desea modificar: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoEquipo(NumeroSerieEquipo)==false)
                        {
                            cout<<"\nDigite 1 si desea modificar los datos";
                            cout<<"\nDigite 2 si desea agregarle un cpu";
                            cout<<"\nDigite 3 si desea agregarle un monitor";
                            cout<<"\nDigite 4 si desea agregarle una impresora";
                            cout<<"\nDigite cualquier otro numero para regresar";
                            cin>>opcion;
                            if (opcion==1)
                            {
                                imprimirEquipo(NumeroSerieEquipo);
                                cout<<"Digite el nuevo numero de serie: ";
                                cin>>NumeroSerie2;
                                if (AprobarNuevoEquipo(NumeroSerie2)==true)
                                {
                                    cout<<"Digite el nuevo usuario: ";
                                    cin>>Usuariop;
                                    ModificarEquipo(NumeroSerieEquipo,Usuariop,NumeroSerie2);
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                                else
                                {
                                    cout<<"\nEl numero de serie digitado ya pertenece a otro equipo";
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }

                            }
                            else if(opcion==2)
                            {
                                cout<<"Digite el numero de serie del cpu: ";
                                cin>>NumeroSerie2;
                                if(AprobarNuevoCPU(NumeroSerie2)==false)
                                {
                                    AsociarEquipoCpu(NumeroSerieEquipo,NumeroSerie2);
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                                else
                                {
                                    cout<<"No existe un CPU con el numero de serie digitado, vaya a agregar cpu para agregar uno nuevo";
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                            }
                            else if(opcion==3)
                            {
                                cout<<"Digite el numero de serie del monitor: ";
                                cin>>NumeroSerie2;
                                if(AprobarNuevoMonitor(NumeroSerie2)==false)
                                {
                                    AsociarEquipoMonitor(NumeroSerieEquipo,NumeroSerie2);
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                                else
                                {
                                    cout<<"No existe un Monitor con el numero de serie digitado, vaya a agregar monitor para agregar uno nuevo";
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                            }
                            else if(opcion==4)
                            {
                                cout<<"Digite el numero de serie de la impresora: ";
                                cin>>NumeroSerie2;
                                if(AprobarNuevoPrinter(NumeroSerie2)==false)
                                {
                                    AsociarEquipoPrinter(NumeroSerieEquipo,NumeroSerie2);
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                                else
                                {
                                    cout<<"No existe una impresora con el numero de serie digitado, vaya a agregar impresora para agregar una nueva";
                                    cout<<"\nDigite una tecla para continuar";
                                    cin>>tecla;
                                    system("cls");
                                }
                            }
                        }
                        else
                        {
                            cout<<"\nNo existe ningun equipo con el numero de serie ingresado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if (opcion==4)
                    {
                        system("cls");
                        cout<<"Digite el numero de serie del cpu: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoCPU(NumeroSerieEquipo)==false)
                        {
                            imprimirCPU(NumeroSerieEquipo);
                            cout<<"\nDigite el nuevo numero de serie: ";
                            cin>>NumeroSerie2;
                            if (AprobarNuevoCPU(NumeroSerie2)==true)
                            {
                                cout<<"\nDigite el nuevo departamento: ";
                                cin>>departamentop;
                                ModificarCPU(NumeroSerieEquipo,NumeroSerie2,departamentop);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nEl numero de serie digitado ya pertenece a otro Cpu";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else
                        {
                            cout<<"\nNo existe ningun CPU con el numero de serie ingresado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if (opcion==5)
                    {
                        system("cls");
                        cout<<"Digite el numero de serie de la impresora: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoPrinter(NumeroSerieEquipo)==false)
                        {
                            imprimirPrinter(NumeroSerieEquipo);
                            cout<<"\nDigite el nuevo numero de serie: ";
                            cin>>NumeroSerie2;
                            if (AprobarNuevoPrinter(NumeroSerie2)==true)
                            {
                                cout<<"\nDigite el nuevo departamento: ";
                                cin>>departamentop;
                                ModificarPrinter(NumeroSerieEquipo,NumeroSerie2,departamentop);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nEl numero de serie digitado ya pertenece a otra impresora";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else
                        {
                            cout<<"\nNo existe ninguna impresora con el numero de serie ingresado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==6)
                    {
                        system("cls");
                        cout<<"Digite el numero de serie del monitor: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoMonitor(NumeroSerieEquipo)==false)
                        {
                            imprimirMonitor(NumeroSerieEquipo);
                            cout<<"\nDigite el nuevo numero de serie: ";
                            cin>>NumeroSerie2;
                            if (AprobarNuevoMonitor(NumeroSerie2)==true)
                            {
                                cout<<"\nDigite el nuevo departamento: ";
                                cin>>departamentop;
                                ModificarMonitor(NumeroSerieEquipo,NumeroSerie2,departamentop);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nEl numero de serie digitado ya pertenece a otro monitor";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else
                        {
                            cout<<"\nNo existe ningun monitor con el numero de serie ingresado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==7)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de serie del monitor que desea eliminar";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoMonitor(NumeroSerieEquipo)==false)
                        {
                            eliminarMonitor(NumeroSerieEquipo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie digitado no pertenece a ningun monitor";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if (opcion==8)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de serie de la impresora que desea eliminar";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoPrinter(NumeroSerieEquipo)==false)
                        {
                            eliminarPrinter(NumeroSerieEquipo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie digitado no pertenece a ninguna impresora";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==9)
                    {
                        system("cls");
                        cout<<"\nDigite el numero de serie del cpu que desea eliminar";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoCPU(NumeroSerieEquipo)==false)
                        {
                            eliminarCpu(NumeroSerieEquipo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie digitado no pertenece a ningun CPU";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==10)
                    {
                        system("cls");
                        cout<<"/nDigite el nuevo numero de serie: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoMonitor(NumeroSerieEquipo)==true)
                        {
                        	cout<<"Digite el departamento: ";
                        	cin>>departamentop;
                            InsertarNuevoMonitor(NumeroSerieEquipo,departamentop);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\El numero de serie digitado ya pertenece a otro monitor";
                        }
                    }
                    else if(opcion==11)
                    {
                        system("cls");
                        cout<<"\nDigite el nuevo numero de serie: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoPrinter(NumeroSerieEquipo)==true)
                        {
                        	cout<<"Digite el departamento: ";
                        	cin>>departamentop;
                            InsertarNuevoPrinter(NumeroSerieEquipo,departamentop);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\El numero de serie digitado ya pertenece a otra impresora";
                        }
                    }
                    else if (opcion==12)
                    {
                        system("cls");
                        cout<<"\nDigite el nuevo numero de serie: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoCPU(NumeroSerieEquipo)==true)
                        {
                        	cout<<"Digite el departamento: ";
                        	cin>>departamentop;
                            InsertarNuevoCPU(NumeroSerieEquipo,departamentop);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\El numero de serie digitado ya pertenece a otro CPU";
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                }
                else if(opcion==4)
                {
                    while(true)
                    {
                    cout<<"Digite 1 para mostrar todos los repuestos de la base de datos";
                    cout<<"\nDigite 2 para agregar un nuevo repuesto";
                    cout<<"\nDigite 3 para aumentar el stock de un repuesto";
                    cout<<"\nDigite 4 para eliminar un repuesto de la base de datos";
                    cout<<"\nDigite 5 para modificar la informacion de un repuesto";
                    cout<<"\nDigite cualquier otro numero para volver al menu principal";
                    cin>>opcion;
                    if (opcion==1)
                    {
                        system("cls");
                        ImprimirRepuestos();
                        cout<<"\nDigite una tecla para continuar";
                        cin>>tecla;
                        system("cls");
                    }
                    else if(opcion==2)
                    {
                        cout<<"Digite el numero de serie del repuesto a agregar: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoRepuesto(NumeroSerieEquipo)==true)
                        {
                            getline(cin,DescripcionProblema);
                            cout<<"\nDigite el nombre del repuesto: ";
                            getline(cin,DescripcionProblema);
                            cout<<"\nIngrese el precio del repuesto: ";
                            cin>>preciop;
                            cout<<"Digite la cantidad inicial de unidades a agregar: ";
                            cin>>stock;
                            InsertarNuevoRepuesto(DescripcionProblema,NumeroSerieEquipo,stock,preciop);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nEl numero de serie ingresado ya pertenece a otro repuesto";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if (opcion==3)
                    {
                        cout<<"\nDigite el numero de serie del repuesto: ";
                        cin>>NumeroSerieEquipo;
                        if(AprobarNuevoRepuesto(NumeroSerieEquipo)==false)
                        {
                            cout<<"\nDigite la cantidad de unidades que desea agregar: ";
                            cin>>stock;
                            AgregarCantidadARepuesto(HayTrabajador,stock,NumeroSerieEquipo,DiaSemana,DiaMes,Mes,Anho,Hora,TrabajadorActivo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<<"\nNo existe ningun repuesto con el numero de serie ingresado";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==4)
                    {
                        cout<<"Digite el numero de serie del repuesto que desea eliminar: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoRepuesto(NumeroSerieEquipo)==false)
                        {
                            EliminarRepuesto(NumeroSerieEquipo);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            cout<"\nEl numero de serie ingresado no pertenece a ningun repuesto";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else if(opcion==5)
                    {
                        cout<<"\nDigite el numero de serie del repuesto a modificar: ";
                        cin>>NumeroSerieEquipo;
                        if (AprobarNuevoRepuesto(NumeroSerieEquipo)==false)
                        {
                            ImprimirUnRepuesto(NumeroSerieEquipo);
                            cout<<"\nDigite el nuevo numero de serie: ";
                            cin>>NumeroSerie2;
                            if (AprobarNuevoRepuesto(NumeroSerie2)==true)
                            {
                                cout<<"\nDigite el nuevo precio: ";
                                cin>>preciop;
                                getline(cin,Nombrep);
                                cout<<"\nDigite el nuevo nombre: ";
                                getline(cin,Nombrep);
                                ModificarRepuesto(NumeroSerieEquipo,NumeroSerie2,preciop,Nombrep);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nEl numero de serie digitado ya pertenece a otro repuesto";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else
                        {
                            cout<<"\nNo existe ningun repuesto con ese numero de serie";
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                    }
                }
                else if(opcion==5)
                {
                    while (true)
                    {
                        cout<<"Digite 1 para mostrar todo el historial de un equipo";
                        cout<<"\nDigite 2 para mostrar todo los trabajos realizados por un funcionario";
                        cout<<"\nDigite 3 mostrar la info de todos los equipos";
                        cout<<"\nDigite 4 ver cual es el equipo que recibe mas mantenimiento";
                        cout<<"\nDigite 5 para ver cual es el funcionario que atiende mas problemas en un dia";
                        cout<<"\nDigite 6 para ver cual es el tipo de problema mas frecuente";
                        cout<<"\nDigite 7 para ver cual es el repuesto mas utilizado en reparaciones";
                        cout<<"\nDigite 8 para ver todas las averias pendientes de reparar";
                        cout<<"\nDigite cualquier otro numero para volver al menu principal";
                        cin>>opcion;

                        if (opcion==1)
                        {
                            cout<<"\nDigite el numero de serie del equipo: ";
                            cin>>NumeroSerieEquipo;
                            if (AprobarNuevoEquipo(NumeroSerieEquipo)==false)
                            {
                                ImprimirHistorialEquipo(NumeroSerieEquipo);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nNo existe ningun equipo con el numero de serie ingresado";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else if(opcion==2)
                        {
                            cout<<"\nDigite el numero de cedula del funcionario: ";
                            cin>>cedulap;
                            if (AprobarNuevoTrabajador(cedulap)==false)
                            {
                                imprimirHistorialTrabajador(cedulap);
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                            else
                            {
                                cout<<"\nNo existe ningun trabajador con el numero de cedula ingresado";
                                cout<<"\nDigite una tecla para continuar";
                                cin>>tecla;
                                system("cls");
                            }
                        }
                        else if(opcion==3)
                        {
                            imprimirequipos();
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if(opcion==4)
                        {
                            equipoMasMantenimiento();
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if(opcion==5)
                        {
                            cout<<"\nDigite el dia(dd): ";
                            cin>>dia3;
                            cout<<"\nDigite el mes(mm): ";
                            cin>>mes2;
                            cout<<"\nDigite el anho(aaaa): ";
                            cin>>Anho2;
                            TrabajadorMasManteUnDia(dia3,mes2,Anho2);
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if(opcion==6)
                        {
                            ProblemaMasFrecuente();
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if(opcion==7)
                        {
                            RepuestoMasUsado();
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else if(opcion==8)
                        {
                            ImprimirMantesPendientes();
                            cout<<"\nDigite una tecla para continuar";
                            cin>>tecla;
                            system("cls");
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else
                    {
                        system("cls");
                        goto salto2;
                    }
            }
        }
    return 0;
}

