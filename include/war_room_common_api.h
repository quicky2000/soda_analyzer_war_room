/*
  This file is part of osm_diff_analyzer_user_object, Openstreetmap
  diff analyzer based on CPP diff representation. It's aim is to survey
  editions concerning a specified tag
  Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef _WAR_ROOM_COMMON_API_H_
#define _WAR_ROOM_COMMON_API_H_

#include "common_api_if.h"

namespace osm_diff_analyzer_war_room
{
  class war_room_common_api
  {
  public:
    inline war_room_common_api(osm_diff_analyzer_if::module_library_if::t_register_function p_func);
    inline void get_user_subscription_date(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                           const std::string & p_name,
                                           std::string & p_date,
                                           void * p_user_data=NULL); 
    inline const osm_api_data_types::osm_node * get_node(const osm_api_data_types::osm_object::t_osm_id & p_id,
							 void * p_user_data=NULL);
    inline const osm_api_data_types::osm_node * get_node_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
								 const osm_api_data_types::osm_core_element::t_osm_version & p_version=0,
								 void * p_user_data=NULL);
    inline const std::vector<osm_api_data_types::osm_node*> * const get_node_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
										     void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_way*> * const get_node_ways(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                                                                 void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_relation*> * const get_node_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
											   void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_node*> * const get_nodes(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
									      void * p_user_data=NULL);
    inline const osm_api_data_types::osm_way * get_way(const osm_api_data_types::osm_object::t_osm_id & p_id,
						       void * p_user_data=NULL);
    inline const osm_api_data_types::osm_way * get_way_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
							       const osm_api_data_types::osm_core_element::t_osm_version & p_version=0,
							       void * p_user_data=NULL);

    inline const std::vector<osm_api_data_types::osm_way*> * const get_way_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
										   void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_relation*> * const get_way_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
											  void * p_user_data = NULL);

    inline const osm_api_data_types::osm_way * const get_way_full(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                                                  std::vector<osm_api_data_types::osm_node*> & p_nodes,
                                                                  void * p_user_data=NULL);

    inline const std::vector<osm_api_data_types::osm_way*> * const get_ways(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
									    void * p_user_data=NULL);

    inline const osm_api_data_types::osm_relation * get_relation(const osm_api_data_types::osm_object::t_osm_id & p_id,
								 void * p_user_data=NULL);

    inline const osm_api_data_types::osm_relation * get_relation_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
									 const osm_api_data_types::osm_core_element::t_osm_version & p_version=0,
									 void * p_user_data=NULL);

    inline const std::vector<osm_api_data_types::osm_relation*> * const get_relation_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
											     void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_relation*> * const get_relation_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
											       void * p_user_data = NULL);

    inline const osm_api_data_types::osm_relation * const get_relation_full(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                                                            std::vector<osm_api_data_types::osm_node*> & p_nodes,
                                                                            std::vector<osm_api_data_types::osm_way*> & p_ways,
                                                                            void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_relation*> * const get_relations(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
										      void * p_user_data=NULL);

    inline const osm_api_data_types::osm_changeset * get_changeset(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                                                   void * p_user_data=NULL);

    inline const std::vector<osm_api_data_types::osm_change*> * const get_changeset_content(const osm_api_data_types::osm_object::t_osm_id & p_id,
                                                                                            void * p_user_data = NULL);

    inline const std::vector<osm_api_data_types::osm_changeset* > * const get_changesets(const osm_api_data_types::osm_bounding_box & p_bounding_box,
											 const osm_api_data_types::osm_object::t_osm_id & p_id,
											 const std::string & p_user_name,
											 const std::string & p_time1,
											 const std::string & p_time2,
											 bool p_open,
											 bool p_close,
											 void * p_user_data=NULL);
    inline void get_map(const osm_api_data_types::osm_bounding_box & p_bounding_box,
                        std::vector<osm_api_data_types::osm_node*> & p_nodes,
                        std::vector<osm_api_data_types::osm_way*> & p_ways,
                        std::vector<osm_api_data_types::osm_relation*> & p_relations,
                        void *p_user_data=NULL);
    inline void cache(const osm_api_data_types::osm_node & p_node);
    inline void cache(const osm_api_data_types::osm_way & p_way);
    inline void cache(const osm_api_data_types::osm_relation & p_relation);
    inline void cache(const osm_api_data_types::osm_object::t_osm_id & p_id,
		      const std::string & p_user_name,
		      const osm_api_data_types::osm_object::t_osm_id & p_latest_changeset,
		      const std::string & p_date);
    inline const std::vector<osm_api_data_types::osm_change*> * const get_osm_change_file_content(const std::string & p_file_name);
    inline void get_osm_file_content(const std::string & p_file_name,
				     std::vector<osm_api_data_types::osm_node*> & p_nodes,
				     std::vector<osm_api_data_types::osm_way*> & p_ways,
				     std::vector<osm_api_data_types::osm_relation*> & p_relations);

    inline void get_user_browse_url(std::string & p_result,
                                    const osm_api_data_types::osm_object::t_osm_id & p_id,
                                    const std::string & p_user_name);
    inline void get_object_browse_url(std::string & p_result,
                                      const std::string & p_type,
                                      const osm_api_data_types::osm_object::t_osm_id & p_id);
    inline void get_api_object_url(std::string & p_result,
                                   const std::string & p_type,
                                   const osm_api_data_types::osm_object::t_osm_id & p_id,
                                   const osm_api_data_types::osm_core_element::t_osm_version & p_version);
    inline void ui_register_module(const osm_diff_analyzer_if::analyzer_base & p_module,
				   const std::string & p_text);
    inline void ui_append_log_text(const osm_diff_analyzer_if::analyzer_base & p_module,
				   const std::string & p_text);
    inline void ui_declare_html_report(const osm_diff_analyzer_if::analyzer_base & p_module,
				       const std::string & p_name);


  private:
    osm_diff_analyzer_if::common_api_if::t_get_user_subscription_date m_get_user_subscription_date;
    osm_diff_analyzer_if::common_api_if::t_get_node m_get_node;
    osm_diff_analyzer_if::common_api_if::t_get_node_version m_get_node_version;
    osm_diff_analyzer_if::common_api_if::t_get_node_history m_get_node_history;
    osm_diff_analyzer_if::common_api_if::t_get_node_ways m_get_node_ways;
    osm_diff_analyzer_if::common_api_if::t_get_node_relations m_get_node_relations;
    osm_diff_analyzer_if::common_api_if::t_get_nodes m_get_nodes;
    osm_diff_analyzer_if::common_api_if::t_get_way m_get_way;
    osm_diff_analyzer_if::common_api_if::t_get_way_version m_get_way_version;
    osm_diff_analyzer_if::common_api_if::t_get_way_history m_get_way_history;
    osm_diff_analyzer_if::common_api_if::t_get_way_relations m_get_way_relations;
    osm_diff_analyzer_if::common_api_if::t_get_way_full m_get_way_full;
    osm_diff_analyzer_if::common_api_if::t_get_ways m_get_ways;
    osm_diff_analyzer_if::common_api_if::t_get_relation m_get_relation;
    osm_diff_analyzer_if::common_api_if::t_get_relation_version m_get_relation_version;
    osm_diff_analyzer_if::common_api_if::t_get_relation_history m_get_relation_history;
    osm_diff_analyzer_if::common_api_if::t_get_relation_relations m_get_relation_relations;
    osm_diff_analyzer_if::common_api_if::t_get_relation_full m_get_relation_full;
    osm_diff_analyzer_if::common_api_if::t_get_relations m_get_relations;
    osm_diff_analyzer_if::common_api_if::t_get_changeset m_get_changeset;
    osm_diff_analyzer_if::common_api_if::t_get_changeset_content m_get_changeset_content;
    osm_diff_analyzer_if::common_api_if::t_get_changesets m_get_changesets;
    osm_diff_analyzer_if::common_api_if::t_get_map m_get_map;
    osm_diff_analyzer_if::common_api_if::t_cache_node m_cache_node;
    osm_diff_analyzer_if::common_api_if::t_cache_way m_cache_way;
    osm_diff_analyzer_if::common_api_if::t_cache_relation m_cache_relation;
    osm_diff_analyzer_if::common_api_if::t_cache_user m_cache_user;
    osm_diff_analyzer_if::common_api_if::t_get_osm_change_file_content m_get_osm_change_file_content;
    osm_diff_analyzer_if::common_api_if::t_get_osm_file_content m_get_osm_file_content;
    osm_diff_analyzer_if::common_api_if::t_get_user_browse_url m_get_user_browse_url;
    osm_diff_analyzer_if::common_api_if::t_get_object_browse_url m_get_object_browse_url;
    osm_diff_analyzer_if::common_api_if::t_get_api_object_url m_get_api_object_url;
    osm_diff_analyzer_if::common_api_if::t_ui_register_module m_ui_register_module;
    osm_diff_analyzer_if::common_api_if::t_ui_append_log_text m_ui_append_log_text;
    osm_diff_analyzer_if::common_api_if::t_ui_declare_html_report m_ui_declare_html_report;
  };

  //---------------------------------------------------------------------------- 
  war_room_common_api::war_room_common_api(osm_diff_analyzer_if::module_library_if::t_register_function p_func) 
    {
      uintptr_t l_api_ptr[COMMON_API_IF_SIZE];
      for(uint32_t l_index = 0 ;l_index < COMMON_API_IF_SIZE ; ++l_index)
        {
          l_api_ptr[l_index] = 0;
        }
      p_func(l_api_ptr,COMMON_API_IF_SIZE);

      m_get_user_subscription_date = (osm_diff_analyzer_if::common_api_if::t_get_user_subscription_date)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_USER_SUBSCRIPTION_DATE];  
      m_get_node = (osm_diff_analyzer_if::common_api_if::t_get_node)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODE]; 
      m_get_node_version = (osm_diff_analyzer_if::common_api_if::t_get_node_version)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODE_VERSION]; 
      m_get_node_history = (osm_diff_analyzer_if::common_api_if::t_get_node_history)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODE_HISTORY]; 
      m_get_node_ways = (osm_diff_analyzer_if::common_api_if::t_get_node_ways)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODE_WAYS]; 
      m_get_node_relations = (osm_diff_analyzer_if::common_api_if::t_get_node_relations)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODE_RELATIONS]; 
      m_get_nodes = (osm_diff_analyzer_if::common_api_if::t_get_nodes)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_NODES]; 
      m_get_way = (osm_diff_analyzer_if::common_api_if::t_get_way)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAY]; 
      m_get_way_version = (osm_diff_analyzer_if::common_api_if::t_get_way_version)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAY_VERSION]; 
      m_get_way_history = (osm_diff_analyzer_if::common_api_if::t_get_way_history)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAY_HISTORY]; 
      m_get_way_relations = (osm_diff_analyzer_if::common_api_if::t_get_way_relations)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAY_RELATIONS]; 
      m_get_way_full = (osm_diff_analyzer_if::common_api_if::t_get_way_full)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAY_FULL]; 
      m_get_ways = (osm_diff_analyzer_if::common_api_if::t_get_ways)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_WAYS]; 
      m_get_relation = (osm_diff_analyzer_if::common_api_if::t_get_relation)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATION]; 
      m_get_relation_version = (osm_diff_analyzer_if::common_api_if::t_get_relation_version)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATION_VERSION]; 
      m_get_relation_history = (osm_diff_analyzer_if::common_api_if::t_get_relation_history)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATION_HISTORY]; 
      m_get_relation_relations = (osm_diff_analyzer_if::common_api_if::t_get_relation_relations)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATION_RELATIONS]; 
      m_get_relation_full = (osm_diff_analyzer_if::common_api_if::t_get_relation_full)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATION_FULL]; 
      m_get_relations = (osm_diff_analyzer_if::common_api_if::t_get_relations)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_RELATIONS]; 
      m_get_changeset = (osm_diff_analyzer_if::common_api_if::t_get_changeset)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_CHANGESET]; 
      m_get_changeset_content = (osm_diff_analyzer_if::common_api_if::t_get_changeset_content)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_CHANGESET_CONTENT]; 
      m_get_changesets = (osm_diff_analyzer_if::common_api_if::t_get_changesets)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_CHANGESETS]; 
      m_get_map = (osm_diff_analyzer_if::common_api_if::t_get_map)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_MAP]; 
      m_cache_node = (osm_diff_analyzer_if::common_api_if::t_cache_node)l_api_ptr[osm_diff_analyzer_if::common_api_if::CACHE_NODE]; 
      m_cache_way = (osm_diff_analyzer_if::common_api_if::t_cache_way)l_api_ptr[osm_diff_analyzer_if::common_api_if::CACHE_WAY]; 
      m_cache_relation = (osm_diff_analyzer_if::common_api_if::t_cache_relation)l_api_ptr[osm_diff_analyzer_if::common_api_if::CACHE_RELATION]; 
      m_cache_user = (osm_diff_analyzer_if::common_api_if::t_cache_user)l_api_ptr[osm_diff_analyzer_if::common_api_if::CACHE_USER]; 
      m_get_osm_change_file_content = (osm_diff_analyzer_if::common_api_if::t_get_osm_change_file_content)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_OSM_CHANGE_FILE_CONTENT]; 
      m_get_osm_file_content = (osm_diff_analyzer_if::common_api_if::t_get_osm_file_content)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_OSM_FILE_CONTENT]; 
      m_get_user_browse_url = (osm_diff_analyzer_if::common_api_if::t_get_user_browse_url)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_USER_BROWSE_URL]; 
      m_get_object_browse_url = (osm_diff_analyzer_if::common_api_if::t_get_object_browse_url)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_OBJECT_BROWSE_URL]; 
      m_get_api_object_url = (osm_diff_analyzer_if::common_api_if::t_get_api_object_url)l_api_ptr[osm_diff_analyzer_if::common_api_if::GET_API_OBJECT_URL]; 
      m_ui_register_module = (osm_diff_analyzer_if::common_api_if::t_ui_register_module)l_api_ptr[osm_diff_analyzer_if::common_api_if::UI_REGISTER_MODULE];
      m_ui_append_log_text = (osm_diff_analyzer_if::common_api_if::t_ui_append_log_text)l_api_ptr[osm_diff_analyzer_if::common_api_if::UI_APPEND_LOG_TEXT];
      m_ui_declare_html_report = (osm_diff_analyzer_if::common_api_if::t_ui_declare_html_report)l_api_ptr[osm_diff_analyzer_if::common_api_if::UI_DECLARE_HTML_REPORT];
    }

  //----------------------------------------------------------------------------
  void war_room_common_api::get_user_subscription_date(const osm_api_data_types::osm_object::t_osm_id & p_id,
							 const std::string & p_name,
							 std::string & p_date,
							 void * p_user_data)
  {
    m_get_user_subscription_date(p_id,p_name,p_date,p_user_data);
  }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_node * war_room_common_api::get_node(const osm_api_data_types::osm_object::t_osm_id & p_id,
								       void * p_user_data)
    {
      return m_get_node(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_node * war_room_common_api::get_node_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
									       const osm_api_data_types::osm_core_element::t_osm_version & p_version,
									       void * p_user_data)
    {
      return m_get_node_version(p_id,p_version,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_node*> * const war_room_common_api::get_node_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
												   void * p_user_data)
    {
      return m_get_node_history(p_id,p_user_data);
    }
  
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_way*> * const war_room_common_api::get_node_ways(const osm_api_data_types::osm_object::t_osm_id & p_id,
											       void * p_user_data)
    {
      return m_get_node_ways(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_relation*> * const war_room_common_api::get_node_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
													 void * p_user_data)
    {
      return m_get_node_relations(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_node*> * const war_room_common_api::get_nodes(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
											    void * p_user_data)
    {
      return m_get_nodes(p_ids,p_user_data);
    }

  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_way * war_room_common_api::get_way(const osm_api_data_types::osm_object::t_osm_id & p_id,
								     void * p_user_data)
    {
      return m_get_way(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_way * war_room_common_api::get_way_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
									     const osm_api_data_types::osm_core_element::t_osm_version & p_version,
									     void * p_user_data)
    {
      return m_get_way_version(p_id,p_version,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_way*> * const war_room_common_api::get_way_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
												 void * p_user_data)
    {
      return m_get_way_history(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_relation*> * const war_room_common_api::get_way_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
													void * p_user_data)
    {
      return m_get_way_relations(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_way * const war_room_common_api::get_way_full(const osm_api_data_types::osm_object::t_osm_id & p_id,
										std::vector<osm_api_data_types::osm_node*> & p_nodes,
										void * p_user_data)
    {
      return m_get_way_full(p_id,p_nodes,p_user_data);
    }

  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_way*> * const war_room_common_api::get_ways(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
											  void * p_user_data)
    {
      return m_get_ways(p_ids,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_relation * war_room_common_api::get_relation(const osm_api_data_types::osm_object::t_osm_id & p_id,
									       void * p_user_data)
    {
      return m_get_relation(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_relation * war_room_common_api::get_relation_version(const osm_api_data_types::osm_object::t_osm_id & p_id,
										       const osm_api_data_types::osm_core_element::t_osm_version & p_version,
										       void * p_user_data)
    {
      return m_get_relation_version(p_id,p_version,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_relation*> * const war_room_common_api::get_relation_history(const osm_api_data_types::osm_object::t_osm_id & p_id,
													   void * p_user_data)
    {
      return m_get_relation_history(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_relation*> * const war_room_common_api::get_relation_relations(const osm_api_data_types::osm_object::t_osm_id & p_id,
													     void * p_user_data)
    {
      return m_get_relation_relations(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_relation * const war_room_common_api::get_relation_full(const osm_api_data_types::osm_object::t_osm_id & p_id,
											  std::vector<osm_api_data_types::osm_node*> & p_nodes,
											  std::vector<osm_api_data_types::osm_way*> & p_ways,
											  void * p_user_data)
    {
      return m_get_relation_full(p_id,
                                 p_nodes,
                                 p_ways,
                                 p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_relation*> * const war_room_common_api::get_relations(const std::vector<osm_api_data_types::osm_object::t_osm_id> & p_ids,
												    void * p_user_data)
    {
      return m_get_relations(p_ids,p_user_data);
    }

  //----------------------------------------------------------------------------
  const osm_api_data_types::osm_changeset * war_room_common_api::get_changeset(const osm_api_data_types::osm_object::t_osm_id & p_id,
										 void * p_user_data)
    {
      return m_get_changeset(p_id,p_user_data);
    }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_change*> * const war_room_common_api::get_changeset_content(const osm_api_data_types::osm_object::t_osm_id & p_id,
													  void * p_user_data)
    {
      return m_get_changeset_content(p_id,p_user_data);
    }

  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_changeset* > * const war_room_common_api::get_changesets(const osm_api_data_types::osm_bounding_box & p_bounding_box,
												       const osm_api_data_types::osm_object::t_osm_id & p_id,
												       const std::string & p_user_name,
												       const std::string & p_time1,
												       const std::string & p_time2,
												       bool p_open,
												       bool p_close,
												       void * p_user_data)
    {
      return m_get_changesets(p_bounding_box,p_id,p_user_name,p_time1,p_time2,p_open,p_close,p_user_data);
    }
  //----------------------------------------------------------------------------
  void war_room_common_api::get_map(const osm_api_data_types::osm_bounding_box & p_bounding_box,
				      std::vector<osm_api_data_types::osm_node*> & p_nodes,
				      std::vector<osm_api_data_types::osm_way*> & p_ways,
				      std::vector<osm_api_data_types::osm_relation*> & p_relations,
				      void *p_user_data)
  {
    return m_get_map(p_bounding_box,p_nodes,p_ways,p_relations,p_user_data);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::cache(const osm_api_data_types::osm_node & p_node)
  {
    return m_cache_node(p_node);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::cache(const osm_api_data_types::osm_way & p_way)
  {
    return m_cache_way(p_way);
  }
  //----------------------------------------------------------------------------
  void war_room_common_api::cache(const osm_api_data_types::osm_relation & p_relation)
  {
    return m_cache_relation(p_relation);
  }
  //----------------------------------------------------------------------------
  void war_room_common_api::cache(const osm_api_data_types::osm_object::t_osm_id & p_id,
				    const std::string & p_user_name,
				    const osm_api_data_types::osm_object::t_osm_id & p_latest_changeset,
				    const std::string & p_date)
  {
    m_cache_user(p_id,p_user_name,p_latest_changeset,p_date);
  }
  //----------------------------------------------------------------------------
  const std::vector<osm_api_data_types::osm_change*> * const war_room_common_api::get_osm_change_file_content(const std::string & p_file_name)
    {
      return m_get_osm_change_file_content(p_file_name);
    }
  //----------------------------------------------------------------------------
  void war_room_common_api::get_osm_file_content(const std::string & p_file_name,
						   std::vector<osm_api_data_types::osm_node*> & p_nodes,
						   std::vector<osm_api_data_types::osm_way*> & p_ways,
						   std::vector<osm_api_data_types::osm_relation*> & p_relations)
  {
    m_get_osm_file_content(p_file_name,
			   p_nodes,
			   p_ways,
			   p_relations);
  }
  //----------------------------------------------------------------------------
  void war_room_common_api::get_user_browse_url(std::string & p_result,
						  const osm_api_data_types::osm_object::t_osm_id & p_id,
						  const std::string & p_user_name)
  {
    m_get_user_browse_url(p_result,p_id,p_user_name);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::get_object_browse_url(std::string & p_result,
						    const std::string & p_type,
						    const osm_api_data_types::osm_object::t_osm_id & p_id)
  {
    m_get_object_browse_url(p_result,p_type,p_id);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::get_api_object_url(std::string & p_result,
						 const std::string & p_type,
						 const osm_api_data_types::osm_object::t_osm_id & p_id,
						 const osm_api_data_types::osm_core_element::t_osm_version & p_version)
  {
    m_get_api_object_url(p_result,p_type,p_id,p_version);
  }
  
  //----------------------------------------------------------------------------
  void war_room_common_api::ui_register_module(const osm_diff_analyzer_if::analyzer_base & p_module,
						 const std::string & p_name)
  {
    m_ui_register_module(p_module,p_name);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::ui_append_log_text(const osm_diff_analyzer_if::analyzer_base & p_module,
						 const std::string & p_text)
  {
    m_ui_append_log_text(p_module,p_text);
  }

  //----------------------------------------------------------------------------
  void war_room_common_api::ui_declare_html_report(const osm_diff_analyzer_if::analyzer_base & p_module,
						     const std::string & p_name)
  {
    m_ui_declare_html_report(p_module,p_name);
  }


}
#endif // _WAR_ROOM_COMMON_API_H_
//EOF
