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

#include <aws/codecommit/model/PostCommentForComparedCommitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PostCommentForComparedCommitRequest::PostCommentForComparedCommitRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String PostCommentForComparedCommitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_beforeCommitIdHasBeenSet)
  {
   payload.WithString("beforeCommitId", m_beforeCommitId);

  }

  if(m_afterCommitIdHasBeenSet)
  {
   payload.WithString("afterCommitId", m_afterCommitId);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PostCommentForComparedCommitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.PostCommentForComparedCommit"));
  return headers;

}




