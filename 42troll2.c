#include <unistd.h>
#include <stdlib.h>

int main()
{
	if (daemon(1, 1) == -1) {
        return 1; // Error al crear el demonio
    }

	sleep(120);
    while (1)
    {
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'es')]\"");
        sleep(5);
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'us')]\"");
        sleep(5);
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'fr')]\"");
        sleep(5);
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'de')]\"");
        sleep(5);
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'ru')]\"");
        sleep(5);
        system("gsettings set org.gnome.desktop.input-sources sources \"[('xkb', 'it')]\"");
        sleep(5);

    }
	   return 0;
}
