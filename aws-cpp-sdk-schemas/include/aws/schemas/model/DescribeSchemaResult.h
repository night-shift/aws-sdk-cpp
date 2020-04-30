﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Schemas
{
namespace Model
{
  class AWS_SCHEMAS_API DescribeSchemaResult
  {
  public:
    DescribeSchemaResult();
    DescribeSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The source of the schema definition.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const Aws::String& value) { m_content = value; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const char* value) { m_content.assign(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline DescribeSchemaResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline DescribeSchemaResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline DescribeSchemaResult& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline DescribeSchemaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline DescribeSchemaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline DescribeSchemaResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline DescribeSchemaResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline DescribeSchemaResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline DescribeSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The version number of the schema</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline DescribeSchemaResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline DescribeSchemaResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline DescribeSchemaResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DescribeSchemaResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the schema.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of the schema.</p>
     */
    inline DescribeSchemaResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the schema.</p>
     */
    inline DescribeSchemaResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the schema.</p>
     */
    inline DescribeSchemaResult& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The date the schema version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetVersionCreatedDate() const{ return m_versionCreatedDate; }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline void SetVersionCreatedDate(const Aws::Utils::DateTime& value) { m_versionCreatedDate = value; }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline void SetVersionCreatedDate(Aws::Utils::DateTime&& value) { m_versionCreatedDate = std::move(value); }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline DescribeSchemaResult& WithVersionCreatedDate(const Aws::Utils::DateTime& value) { SetVersionCreatedDate(value); return *this;}

    /**
     * <p>The date the schema version was created.</p>
     */
    inline DescribeSchemaResult& WithVersionCreatedDate(Aws::Utils::DateTime&& value) { SetVersionCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_content;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_schemaVersion;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_type;

    Aws::Utils::DateTime m_versionCreatedDate;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
