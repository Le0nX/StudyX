#include <gtk/gtk.h>

int main(int argc, char *argv[]){

	GtkWidget *window;

	gtk_init(&argc, &argv); /*initilize Gtk and all of its libs*/
	
	
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title (GTK_WINDOW (window), "Test frame");
	gtk_widget_show (window);

	
	/*control over the main loop*/	
	gtk_main ();

	return 0;
}
