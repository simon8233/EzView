/* menu.c generated by valac 0.22.1, the Vala compiler
 * generated from menu.vala, do not modify */

/* Copyright (C) 2011 Red Hat, Inc.*/
/* This library is free software; you can redistribute it and/or*/
/* modify it under the terms of the GNU Lesser General Public*/
/* License as published by the Free Software Foundation; either*/
/* version 2.1 of the License, or (at your option) any later version.*/
/* This library is distributed in the hope that it will be useful,*/
/* but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU*/
/* Lesser General Public License for more details.*/
/* You should have received a copy of the GNU Lesser General Public*/
/* License along with this library; if not, see <http://www.gnu.org/licenses/>.*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <spice/controller_prot.h>
#include <custom.h>


#define SPICE_CTRL_TYPE_MENU_ITEM (spice_ctrl_menu_item_get_type ())
#define SPICE_CTRL_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPICE_CTRL_TYPE_MENU_ITEM, SpiceCtrlMenuItem))
#define SPICE_CTRL_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPICE_CTRL_TYPE_MENU_ITEM, SpiceCtrlMenuItemClass))
#define SPICE_CTRL_IS_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPICE_CTRL_TYPE_MENU_ITEM))
#define SPICE_CTRL_IS_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPICE_CTRL_TYPE_MENU_ITEM))
#define SPICE_CTRL_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPICE_CTRL_TYPE_MENU_ITEM, SpiceCtrlMenuItemClass))

typedef struct _SpiceCtrlMenuItem SpiceCtrlMenuItem;
typedef struct _SpiceCtrlMenuItemClass SpiceCtrlMenuItemClass;
typedef struct _SpiceCtrlMenuItemPrivate SpiceCtrlMenuItemPrivate;

#define SPICE_CTRL_TYPE_MENU (spice_ctrl_menu_get_type ())
#define SPICE_CTRL_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPICE_CTRL_TYPE_MENU, SpiceCtrlMenu))
#define SPICE_CTRL_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPICE_CTRL_TYPE_MENU, SpiceCtrlMenuClass))
#define SPICE_CTRL_IS_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPICE_CTRL_TYPE_MENU))
#define SPICE_CTRL_IS_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPICE_CTRL_TYPE_MENU))
#define SPICE_CTRL_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPICE_CTRL_TYPE_MENU, SpiceCtrlMenuClass))

typedef struct _SpiceCtrlMenu SpiceCtrlMenu;
typedef struct _SpiceCtrlMenuClass SpiceCtrlMenuClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _SpiceCtrlMenuPrivate SpiceCtrlMenuPrivate;
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _SpiceCtrlMenuItem {
	GObject parent_instance;
	SpiceCtrlMenuItemPrivate * priv;
	SpiceCtrlMenu* submenu;
	gint parent_id;
	gint id;
	gchar* text;
	gchar* accel;
	unsigned int flags;
};

struct _SpiceCtrlMenuItemClass {
	GObjectClass parent_class;
};

typedef enum  {
	SPICE_CTRL_ERROR_VALUE
} SpiceCtrlError;
#define SPICE_CTRL_ERROR spice_ctrl_error_quark ()
struct _SpiceCtrlMenu {
	GObject parent_instance;
	SpiceCtrlMenuPrivate * priv;
	GList* items;
};

struct _SpiceCtrlMenuClass {
	GObjectClass parent_class;
};


static gpointer spice_ctrl_menu_item_parent_class = NULL;
static gpointer spice_ctrl_menu_parent_class = NULL;

GType spice_ctrl_menu_item_get_type (void) G_GNUC_CONST;
GType spice_ctrl_menu_get_type (void) G_GNUC_CONST;
enum  {
	SPICE_CTRL_MENU_ITEM_DUMMY_PROPERTY
};
SpiceCtrlMenuItem* spice_ctrl_menu_item_new (gint id, const gchar* text, unsigned int flags);
SpiceCtrlMenuItem* spice_ctrl_menu_item_construct (GType object_type, gint id, const gchar* text, unsigned int flags);
GQuark spice_ctrl_error_quark (void);
SpiceCtrlMenuItem* spice_ctrl_menu_item_new_from_string (const gchar* str, GError** error);
SpiceCtrlMenuItem* spice_ctrl_menu_item_construct_from_string (GType object_type, const gchar* str, GError** error);
SpiceCtrlMenu* spice_ctrl_menu_new (void);
SpiceCtrlMenu* spice_ctrl_menu_construct (GType object_type);
gchar* spice_ctrl_menu_item_to_string (SpiceCtrlMenuItem* self);
gchar* spice_ctrl_menu_to_string (SpiceCtrlMenu* self);
const gchar* spice_protocol_controller_menu_flags_to_string (unsigned int self);
static const char* _spice_protocol_controller_menu_flags_to_string (unsigned int value);
static void spice_ctrl_menu_item_finalize (GObject* obj);
enum  {
	SPICE_CTRL_MENU_DUMMY_PROPERTY
};
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
SpiceCtrlMenu* spice_ctrl_menu_find_id (SpiceCtrlMenu* self, gint id);
SpiceCtrlMenu* spice_ctrl_menu_new_from_string (const gchar* str);
SpiceCtrlMenu* spice_ctrl_menu_construct_from_string (GType object_type, const gchar* str);
static void spice_ctrl_menu_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


SpiceCtrlMenuItem* spice_ctrl_menu_item_construct (GType object_type, gint id, const gchar* text, unsigned int flags) {
	SpiceCtrlMenuItem * self = NULL;
	gint _tmp0_ = 0;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	unsigned int _tmp3_ = 0;
	g_return_val_if_fail (text != NULL, NULL);
	self = (SpiceCtrlMenuItem*) g_object_new (object_type, NULL);
	_tmp0_ = id;
	self->id = _tmp0_;
	_tmp1_ = text;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (self->text);
	self->text = _tmp2_;
	_tmp3_ = flags;
	self->flags = _tmp3_;
	return self;
}


SpiceCtrlMenuItem* spice_ctrl_menu_item_new (gint id, const gchar* text, unsigned int flags) {
	return spice_ctrl_menu_item_construct (SPICE_CTRL_TYPE_MENU_ITEM, id, text, flags);
}


SpiceCtrlMenuItem* spice_ctrl_menu_item_construct_from_string (GType object_type, const gchar* str, GError** error) {
	SpiceCtrlMenuItem * self = NULL;
	gchar** params = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	gint params_length1 = 0;
	gint _params_size_ = 0;
	gchar** _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	gboolean _tmp5_ = FALSE;
	gchar** _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	const gchar* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gchar** _tmp10_ = NULL;
	gint _tmp10__length1 = 0;
	const gchar* _tmp11_ = NULL;
	gint _tmp12_ = 0;
	gchar** textaccel = NULL;
	gchar** _tmp13_ = NULL;
	gint _tmp13__length1 = 0;
	const gchar* _tmp14_ = NULL;
	gchar** _tmp15_ = NULL;
	gchar** _tmp16_ = NULL;
	gint textaccel_length1 = 0;
	gint _textaccel_size_ = 0;
	gchar** _tmp17_ = NULL;
	gint _tmp17__length1 = 0;
	const gchar* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	gchar** _tmp20_ = NULL;
	gint _tmp20__length1 = 0;
	gchar** _tmp24_ = NULL;
	gint _tmp24__length1 = 0;
	const gchar* _tmp25_ = NULL;
	gint _tmp26_ = 0;
	SpiceCtrlMenu* _tmp27_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (str != NULL, NULL);
	self = (SpiceCtrlMenuItem*) g_object_new (object_type, NULL);
	_tmp0_ = str;
	_tmp1_ = CONTROLLER_MENU_PARAM_DELIMITER;
	_tmp3_ = _tmp2_ = g_strsplit (_tmp0_, _tmp1_, 0);
	params = _tmp3_;
	params_length1 = _vala_array_length (_tmp2_);
	_params_size_ = params_length1;
	_tmp4_ = params;
	_tmp4__length1 = params_length1;
	_tmp5_ = g_warn_if (_tmp4__length1 != 5);
	if (_tmp5_) {
		GError* _tmp6_ = NULL;
		_tmp6_ = g_error_new_literal (SPICE_CTRL_ERROR, SPICE_CTRL_ERROR_VALUE, "");
		_inner_error_ = _tmp6_;
		if (_inner_error_->domain == SPICE_CTRL_ERROR) {
			g_propagate_error (error, _inner_error_);
			params = (_vala_array_free (params, params_length1, (GDestroyNotify) g_free), NULL);
			_g_object_unref0 (self);
			return NULL;
		} else {
			params = (_vala_array_free (params, params_length1, (GDestroyNotify) g_free), NULL);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp7_ = params;
	_tmp7__length1 = params_length1;
	_tmp8_ = _tmp7_[0];
	_tmp9_ = atoi (_tmp8_);
	self->parent_id = _tmp9_;
	_tmp10_ = params;
	_tmp10__length1 = params_length1;
	_tmp11_ = _tmp10_[1];
	_tmp12_ = atoi (_tmp11_);
	self->id = _tmp12_;
	_tmp13_ = params;
	_tmp13__length1 = params_length1;
	_tmp14_ = _tmp13_[2];
	_tmp16_ = _tmp15_ = g_strsplit (_tmp14_, "\t", 0);
	textaccel = _tmp16_;
	textaccel_length1 = _vala_array_length (_tmp15_);
	_textaccel_size_ = textaccel_length1;
	_tmp17_ = textaccel;
	_tmp17__length1 = textaccel_length1;
	_tmp18_ = _tmp17_[0];
	_tmp19_ = g_strdup (_tmp18_);
	_g_free0 (self->text);
	self->text = _tmp19_;
	_tmp20_ = textaccel;
	_tmp20__length1 = textaccel_length1;
	if (_tmp20__length1 > 1) {
		gchar** _tmp21_ = NULL;
		gint _tmp21__length1 = 0;
		const gchar* _tmp22_ = NULL;
		gchar* _tmp23_ = NULL;
		_tmp21_ = textaccel;
		_tmp21__length1 = textaccel_length1;
		_tmp22_ = _tmp21_[1];
		_tmp23_ = g_strdup (_tmp22_);
		_g_free0 (self->accel);
		self->accel = _tmp23_;
	}
	_tmp24_ = params;
	_tmp24__length1 = params_length1;
	_tmp25_ = _tmp24_[3];
	_tmp26_ = atoi (_tmp25_);
	self->flags = (unsigned int) _tmp26_;
	_tmp27_ = spice_ctrl_menu_new ();
	_g_object_unref0 (self->submenu);
	self->submenu = _tmp27_;
	textaccel = (_vala_array_free (textaccel, textaccel_length1, (GDestroyNotify) g_free), NULL);
	params = (_vala_array_free (params, params_length1, (GDestroyNotify) g_free), NULL);
	return self;
}


SpiceCtrlMenuItem* spice_ctrl_menu_item_new_from_string (const gchar* str, GError** error) {
	return spice_ctrl_menu_item_construct_from_string (SPICE_CTRL_TYPE_MENU_ITEM, str, error);
}


static const gchar* string_to_string (const gchar* self) {
	const gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = self;
	return result;
}


static const char* _spice_protocol_controller_menu_flags_to_string (unsigned int value) {
	switch (value) {
		case CONTROLLER_MENU_FLAGS_SEPARATOR:
		return "CONTROLLER_MENU_FLAGS_SEPARATOR";
		case CONTROLLER_MENU_FLAGS_DISABLED:
		return "CONTROLLER_MENU_FLAGS_DISABLED";
		case CONTROLLER_MENU_FLAGS_POPUP:
		return "CONTROLLER_MENU_FLAGS_POPUP";
		case CONTROLLER_MENU_FLAGS_CHECKED:
		return "CONTROLLER_MENU_FLAGS_CHECKED";
		case CONTROLLER_MENU_FLAGS_GRAYED:
		return "CONTROLLER_MENU_FLAGS_GRAYED";
	}
	return NULL;
}


gchar* spice_ctrl_menu_item_to_string (SpiceCtrlMenuItem* self) {
	gchar* result = NULL;
	gchar* sub = NULL;
	SpiceCtrlMenu* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* str = NULL;
	gint _tmp2_ = 0;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	unsigned int _tmp10_ = 0;
	const gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	const gchar* _tmp14_ = NULL;
	const gchar* _tmp15_ = NULL;
	gchar** _tmp16_ = NULL;
	gchar** _tmp17_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->submenu;
	_tmp1_ = spice_ctrl_menu_to_string (_tmp0_);
	sub = _tmp1_;
	_tmp2_ = self->parent_id;
	_tmp3_ = g_strdup_printf ("%i", _tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = self->id;
	_tmp6_ = g_strdup_printf ("%i", _tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = self->text;
	_tmp9_ = string_to_string (_tmp8_);
	_tmp10_ = self->flags;
	_tmp11_ = _spice_protocol_controller_menu_flags_to_string (_tmp10_);
	_tmp12_ = g_strconcat ("pid: ", _tmp4_, ", id: ", _tmp7_, ", text: \"", _tmp9_, "\", flags: ", _tmp11_, NULL);
	_tmp13_ = _tmp12_;
	_g_free0 (_tmp7_);
	_g_free0 (_tmp4_);
	str = _tmp13_;
	_tmp14_ = sub;
	_tmp15_ = string_to_string (_tmp14_);
	_tmp17_ = _tmp16_ = g_strsplit (_tmp15_, "\n", 0);
	{
		gchar** l_collection = NULL;
		gint l_collection_length1 = 0;
		gint _l_collection_size_ = 0;
		gint l_it = 0;
		l_collection = _tmp17_;
		l_collection_length1 = _vala_array_length (_tmp16_);
		for (l_it = 0; l_it < _vala_array_length (_tmp16_); l_it = l_it + 1) {
			gchar* _tmp18_ = NULL;
			gchar* l = NULL;
			_tmp18_ = g_strdup (l_collection[l_it]);
			l = _tmp18_;
			{
				const gchar* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				const gchar* _tmp21_ = NULL;
				const gchar* _tmp22_ = NULL;
				gchar* _tmp23_ = NULL;
				gchar* _tmp24_ = NULL;
				gchar* _tmp25_ = NULL;
				_tmp19_ = l;
				if (g_strcmp0 (_tmp19_, "") == 0) {
					_g_free0 (l);
					continue;
				}
				_tmp20_ = str;
				_tmp21_ = l;
				_tmp22_ = string_to_string (_tmp21_);
				_tmp23_ = g_strconcat ("\n    ", _tmp22_, NULL);
				_tmp24_ = _tmp23_;
				_tmp25_ = g_strconcat (_tmp20_, _tmp24_, NULL);
				_g_free0 (str);
				str = _tmp25_;
				_g_free0 (_tmp24_);
				_g_free0 (l);
			}
		}
		l_collection = (_vala_array_free (l_collection, l_collection_length1, (GDestroyNotify) g_free), NULL);
	}
	result = str;
	_g_free0 (sub);
	return result;
}


static void spice_ctrl_menu_item_class_init (SpiceCtrlMenuItemClass * klass) {
	spice_ctrl_menu_item_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = spice_ctrl_menu_item_finalize;
}


static void spice_ctrl_menu_item_instance_init (SpiceCtrlMenuItem * self) {
}


static void spice_ctrl_menu_item_finalize (GObject* obj) {
	SpiceCtrlMenuItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SPICE_CTRL_TYPE_MENU_ITEM, SpiceCtrlMenuItem);
	_g_object_unref0 (self->submenu);
	_g_free0 (self->text);
	_g_free0 (self->accel);
	G_OBJECT_CLASS (spice_ctrl_menu_item_parent_class)->finalize (obj);
}


GType spice_ctrl_menu_item_get_type (void) {
	static volatile gsize spice_ctrl_menu_item_type_id__volatile = 0;
	if (g_once_init_enter (&spice_ctrl_menu_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpiceCtrlMenuItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) spice_ctrl_menu_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpiceCtrlMenuItem), 0, (GInstanceInitFunc) spice_ctrl_menu_item_instance_init, NULL };
		GType spice_ctrl_menu_item_type_id;
		spice_ctrl_menu_item_type_id = g_type_register_static (G_TYPE_OBJECT, "SpiceCtrlMenuItem", &g_define_type_info, 0);
		g_once_init_leave (&spice_ctrl_menu_item_type_id__volatile, spice_ctrl_menu_item_type_id);
	}
	return spice_ctrl_menu_item_type_id__volatile;
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


SpiceCtrlMenu* spice_ctrl_menu_find_id (SpiceCtrlMenu* self, gint id) {
	SpiceCtrlMenu* result = NULL;
	gint _tmp0_ = 0;
	GList* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = id;
	if (_tmp0_ == 0) {
		SpiceCtrlMenu* _tmp1_ = NULL;
		_tmp1_ = _g_object_ref0 (self);
		result = _tmp1_;
		return result;
	}
	_tmp2_ = self->items;
	{
		GList* item_collection = NULL;
		GList* item_it = NULL;
		item_collection = _tmp2_;
		for (item_it = item_collection; item_it != NULL; item_it = item_it->next) {
			SpiceCtrlMenuItem* _tmp3_ = NULL;
			SpiceCtrlMenuItem* item = NULL;
			_tmp3_ = _g_object_ref0 ((SpiceCtrlMenuItem*) item_it->data);
			item = _tmp3_;
			{
				SpiceCtrlMenuItem* _tmp4_ = NULL;
				gint _tmp5_ = 0;
				gint _tmp6_ = 0;
				SpiceCtrlMenu* menu = NULL;
				SpiceCtrlMenuItem* _tmp10_ = NULL;
				SpiceCtrlMenu* _tmp11_ = NULL;
				gint _tmp12_ = 0;
				SpiceCtrlMenu* _tmp13_ = NULL;
				SpiceCtrlMenu* _tmp14_ = NULL;
				_tmp4_ = item;
				_tmp5_ = _tmp4_->id;
				_tmp6_ = id;
				if (_tmp5_ == _tmp6_) {
					SpiceCtrlMenuItem* _tmp7_ = NULL;
					SpiceCtrlMenu* _tmp8_ = NULL;
					SpiceCtrlMenu* _tmp9_ = NULL;
					_tmp7_ = item;
					_tmp8_ = _tmp7_->submenu;
					_tmp9_ = _g_object_ref0 (_tmp8_);
					result = _tmp9_;
					_g_object_unref0 (item);
					return result;
				}
				_tmp10_ = item;
				_tmp11_ = _tmp10_->submenu;
				_tmp12_ = id;
				_tmp13_ = spice_ctrl_menu_find_id (_tmp11_, _tmp12_);
				menu = _tmp13_;
				_tmp14_ = menu;
				if (_tmp14_ != NULL) {
					result = menu;
					_g_object_unref0 (item);
					return result;
				}
				_g_object_unref0 (menu);
				_g_object_unref0 (item);
			}
		}
	}
	result = NULL;
	return result;
}


SpiceCtrlMenu* spice_ctrl_menu_construct_from_string (GType object_type, const gchar* str) {
	SpiceCtrlMenu * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (str != NULL, NULL);
	self = (SpiceCtrlMenu*) g_object_new (object_type, NULL);
	_tmp0_ = str;
	_tmp1_ = CONTROLLER_MENU_ITEM_DELIMITER;
	_tmp3_ = _tmp2_ = g_strsplit (_tmp0_, _tmp1_, 0);
	{
		gchar** itemstr_collection = NULL;
		gint itemstr_collection_length1 = 0;
		gint _itemstr_collection_size_ = 0;
		gint itemstr_it = 0;
		itemstr_collection = _tmp3_;
		itemstr_collection_length1 = _vala_array_length (_tmp2_);
		for (itemstr_it = 0; itemstr_it < _vala_array_length (_tmp2_); itemstr_it = itemstr_it + 1) {
			gchar* _tmp4_ = NULL;
			gchar* itemstr = NULL;
			_tmp4_ = g_strdup (itemstr_collection[itemstr_it]);
			itemstr = _tmp4_;
			{
				{
					const gchar* _tmp5_ = NULL;
					gint _tmp6_ = 0;
					gint _tmp7_ = 0;
					SpiceCtrlMenuItem* item = NULL;
					const gchar* _tmp8_ = NULL;
					SpiceCtrlMenuItem* _tmp9_ = NULL;
					SpiceCtrlMenu* parent = NULL;
					SpiceCtrlMenuItem* _tmp10_ = NULL;
					gint _tmp11_ = 0;
					SpiceCtrlMenu* _tmp12_ = NULL;
					SpiceCtrlMenu* _tmp13_ = NULL;
					SpiceCtrlMenu* _tmp15_ = NULL;
					SpiceCtrlMenuItem* _tmp16_ = NULL;
					SpiceCtrlMenuItem* _tmp17_ = NULL;
					_tmp5_ = itemstr;
					_tmp6_ = strlen (_tmp5_);
					_tmp7_ = _tmp6_;
					if (_tmp7_ == 0) {
						_g_free0 (itemstr);
						continue;
					}
					_tmp8_ = itemstr;
					_tmp9_ = spice_ctrl_menu_item_new_from_string (_tmp8_, &_inner_error_);
					item = _tmp9_;
					if (_inner_error_ != NULL) {
						if (_inner_error_->domain == SPICE_CTRL_ERROR) {
							goto __catch0_spice_ctrl_error;
						}
						_g_free0 (itemstr);
						itemstr_collection = (_vala_array_free (itemstr_collection, itemstr_collection_length1, (GDestroyNotify) g_free), NULL);
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
					_tmp10_ = item;
					_tmp11_ = _tmp10_->parent_id;
					_tmp12_ = spice_ctrl_menu_find_id (self, _tmp11_);
					parent = _tmp12_;
					_tmp13_ = parent;
					if (_tmp13_ == NULL) {
						GError* _tmp14_ = NULL;
						_tmp14_ = g_error_new_literal (SPICE_CTRL_ERROR, SPICE_CTRL_ERROR_VALUE, "Invalid parent menu id");
						_inner_error_ = _tmp14_;
						_g_object_unref0 (parent);
						_g_object_unref0 (item);
						if (_inner_error_->domain == SPICE_CTRL_ERROR) {
							goto __catch0_spice_ctrl_error;
						}
						_g_object_unref0 (parent);
						_g_object_unref0 (item);
						_g_free0 (itemstr);
						itemstr_collection = (_vala_array_free (itemstr_collection, itemstr_collection_length1, (GDestroyNotify) g_free), NULL);
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
					_tmp15_ = parent;
					_tmp16_ = item;
					_tmp17_ = _g_object_ref0 (_tmp16_);
					_tmp15_->items = g_list_append (_tmp15_->items, _tmp17_);
					_g_object_unref0 (parent);
					_g_object_unref0 (item);
				}
				goto __finally0;
				__catch0_spice_ctrl_error:
				{
					GError* e = NULL;
					GError* _tmp18_ = NULL;
					const gchar* _tmp19_ = NULL;
					e = _inner_error_;
					_inner_error_ = NULL;
					_tmp18_ = e;
					_tmp19_ = _tmp18_->message;
					g_warning ("menu.vala:95: %s", _tmp19_);
					_g_error_free0 (e);
				}
				__finally0:
				if (_inner_error_ != NULL) {
					_g_free0 (itemstr);
					itemstr_collection = (_vala_array_free (itemstr_collection, itemstr_collection_length1, (GDestroyNotify) g_free), NULL);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return NULL;
				}
				_g_free0 (itemstr);
			}
		}
		itemstr_collection = (_vala_array_free (itemstr_collection, itemstr_collection_length1, (GDestroyNotify) g_free), NULL);
	}
	return self;
}


SpiceCtrlMenu* spice_ctrl_menu_new_from_string (const gchar* str) {
	return spice_ctrl_menu_construct_from_string (SPICE_CTRL_TYPE_MENU, str);
}


gchar* spice_ctrl_menu_to_string (SpiceCtrlMenu* self) {
	gchar* result = NULL;
	gchar* str = NULL;
	gchar* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup ("");
	str = _tmp0_;
	_tmp1_ = self->items;
	{
		GList* i_collection = NULL;
		GList* i_it = NULL;
		i_collection = _tmp1_;
		for (i_it = i_collection; i_it != NULL; i_it = i_it->next) {
			SpiceCtrlMenuItem* _tmp2_ = NULL;
			SpiceCtrlMenuItem* i = NULL;
			_tmp2_ = _g_object_ref0 ((SpiceCtrlMenuItem*) i_it->data);
			i = _tmp2_;
			{
				const gchar* _tmp3_ = NULL;
				SpiceCtrlMenuItem* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				gchar* _tmp9_ = NULL;
				_tmp3_ = str;
				_tmp4_ = i;
				_tmp5_ = spice_ctrl_menu_item_to_string (_tmp4_);
				_tmp6_ = _tmp5_;
				_tmp7_ = g_strconcat ("\n", _tmp6_, NULL);
				_tmp8_ = _tmp7_;
				_tmp9_ = g_strconcat (_tmp3_, _tmp8_, NULL);
				_g_free0 (str);
				str = _tmp9_;
				_g_free0 (_tmp8_);
				_g_free0 (_tmp6_);
				_g_object_unref0 (i);
			}
		}
	}
	result = str;
	return result;
}


SpiceCtrlMenu* spice_ctrl_menu_construct (GType object_type) {
	SpiceCtrlMenu * self = NULL;
	self = (SpiceCtrlMenu*) g_object_new (object_type, NULL);
	return self;
}


SpiceCtrlMenu* spice_ctrl_menu_new (void) {
	return spice_ctrl_menu_construct (SPICE_CTRL_TYPE_MENU);
}


static void spice_ctrl_menu_class_init (SpiceCtrlMenuClass * klass) {
	spice_ctrl_menu_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = spice_ctrl_menu_finalize;
}


static void spice_ctrl_menu_instance_init (SpiceCtrlMenu * self) {
}


static void spice_ctrl_menu_finalize (GObject* obj) {
	SpiceCtrlMenu * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SPICE_CTRL_TYPE_MENU, SpiceCtrlMenu);
	__g_list_free__g_object_unref0_0 (self->items);
	G_OBJECT_CLASS (spice_ctrl_menu_parent_class)->finalize (obj);
}


GType spice_ctrl_menu_get_type (void) {
	static volatile gsize spice_ctrl_menu_type_id__volatile = 0;
	if (g_once_init_enter (&spice_ctrl_menu_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpiceCtrlMenuClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) spice_ctrl_menu_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpiceCtrlMenu), 0, (GInstanceInitFunc) spice_ctrl_menu_instance_init, NULL };
		GType spice_ctrl_menu_type_id;
		spice_ctrl_menu_type_id = g_type_register_static (G_TYPE_OBJECT, "SpiceCtrlMenu", &g_define_type_info, 0);
		g_once_init_leave (&spice_ctrl_menu_type_id__volatile, spice_ctrl_menu_type_id);
	}
	return spice_ctrl_menu_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



