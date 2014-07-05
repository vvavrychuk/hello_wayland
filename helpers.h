#ifndef _HELPERS_H_
#define _HELPERS_H_

#include <wayland-client.h>

extern struct wl_compositor *compositor;
extern struct wl_display *display;
extern struct wl_pointer *pointer;
extern struct wl_seat *seat;
extern struct wl_shell *shell;
extern struct wl_shm *shm;

typedef uint32_t pixel;

void hello_setup_wayland(void);
void hello_cleanup_wayland(void);

struct wl_buffer *hello_create_buffer(struct wl_shm_pool *pool,
    unsigned width, unsigned height);
void hello_bind_buffer(struct wl_buffer *buffer,
    struct wl_shell_surface *shell_surface);
void hello_free_buffer(struct wl_buffer *buffer);

struct wl_shm_pool *hello_create_memory_pool(int file);
void hello_free_memory_pool(struct wl_shm_pool *pool);
struct wl_shell_surface *hello_create_surface(void);
void hello_free_surface(struct wl_shell_surface *surface);

void hello_set_cursor_from_pool(struct wl_shm_pool *pool,
    unsigned width, unsigned height,
    int32_t hot_spot_x, int32_t hot_spot_y);
void hello_free_cursor(void);
void hello_set_button_callback(struct wl_shell_surface *surface,
    void (*callback)(uint32_t));

#endif /* _HELPERS_H_ */
